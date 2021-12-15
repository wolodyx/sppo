#include <stdio.h>
#include <unistd.h>
#include <string.h>

void set_iters_number(int n);
void set_iter(int i);

int main(int argc, char** argv)
{
  int iter = 0;
  set_iters_number(10);
  for(; iter < 10; ++iter)
  {
    set_iter(iter);
    sleep(1);
  }
  return 0;
}

int n_iters = 10;

void set_iters_number(int n)
{
  n_iters = n;
}

void set_iter(int iter)
{
  char buffer[50] = {' '};
  strcpy(buffer, "\rloading: ");
  char* ptr = buffer + 10;
  int i = 0;
  for(; i < iter; ++i, ++ptr)
    *ptr = '#';
  for(; i < n_iters; ++i, ++ptr)
    *ptr = ' ';
  strcpy(ptr, "%.2f%%");
  ptr = ptr + 6;
  *ptr = '\0';
  fprintf(stderr, buffer, 100.0/n_iters*(iter+1));
}

