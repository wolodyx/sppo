#include <stdio.h>
int main(int argc, char **argv)
{
  printf("Печатаем \033[1mжирный текст\033[0m\n");

  printf("Печатаем \033[31mкрасный\033[0m, " \
         "\033[33mжелтый\033[0m "            \
         "и \033[32mзеленый\033[0m слова.\n");

  printf("\033[4;47;34mСиний подчеркнутый текст на белом фоне\033[0m\n");
  return 0;
}
