#include <stdio.h>
int main(int argc, char **argv)
{
  puts("Printable ASCII symbols [32..126]:");
  for(int i = 32; i < 127; ++i)
    printf("%c%c", (char)(i), i%16==15 ? '\n' : ' ');
  printf("\n");
  return 0;
}
