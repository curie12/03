#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char input_alpha;
  
  printf("enter a character : ");
  scanf("%c", &input_alpha);
  
  printf("the next character of %c (%i) is %c (%i)\n", input_alpha, input_alpha, input_alpha+1, input_alpha+1);
  
  system("PAUSE");
  return 0;
}
