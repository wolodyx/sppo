#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void recover_tty(void);
void toggle_tty_raw_mode(void);
int main_loop(void);

static struct termios orig_termios;

int main(int argc, char **argv)
{
  tcgetattr(STDIN_FILENO, &orig_termios);
  atexit(recover_tty);
  toggle_tty_raw_mode();
  main_loop();
  return 0;
}


void recover_tty(void)
{
  write(STDOUT_FILENO, "\033[0m", 4);
  tcsetattr(STDIN_FILENO,TCSAFLUSH,&orig_termios);
}


void toggle_tty_raw_mode(void)
{
  struct termios raw;
  raw = orig_termios;
  raw.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
  raw.c_oflag &= ~(OPOST);
  raw.c_cflag |= (CS8);
  raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
  raw.c_cc[VMIN] = 5; raw.c_cc[VTIME] = 8;
  raw.c_cc[VMIN] = 0; raw.c_cc[VTIME] = 0;
  raw.c_cc[VMIN] = 2; raw.c_cc[VTIME] = 0;
  raw.c_cc[VMIN] = 0; raw.c_cc[VTIME] = 8;
  tcsetattr(STDIN_FILENO,TCSAFLUSH,&raw);
}


int main_loop(void)
{
  char ch;
  char buffer[32];
  char waiting[4]={'-', '\\', '|', '/'};
  int iwait = 0;

  for(;;)
  {
    int n = read(STDIN_FILENO, &ch, 1);
    if(n == 0)
    {
      write(STDOUT_FILENO, "\033[0G", 4);
      write(STDOUT_FILENO, waiting+iwait, 1);
      iwait = (iwait + 1) % 4;
    }
    else
    {
      // Очистка строки от курсора до конца строки.
      write(STDOUT_FILENO, "\033[0K", 4);
      switch (ch)
      {
        case 'q' : return 0; // Выход из программы.
        case 'u' :
          write(STDOUT_FILENO, "\033[A", 3); // Перемещаем курсор вверх.
          break;
        case 'd' :
          write(STDOUT_FILENO, "\033[B", 3); // Перемещаем курсор вниз.
          break;
        case 'r' :
          write(STDOUT_FILENO, "\033[31;1m", 7); // Жирный красный текст.
          break;
        case 'b' :
          write(STDOUT_FILENO, "\033[34m", 5); // Синий цвет.
          break;
      }
      // Печатаем код нажатой клавиши.
      int n = sprintf(buffer, "[%d]", ch);
      write(STDOUT_FILENO, buffer, n);
    }
  }
}

