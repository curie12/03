#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b;
  
  printf("분자를 입력하세요 : ");
  scanf("%i", &a);
  printf("분모를 입력하세요 : ");
  scanf("%i", &b);
  
  printf("나누기의 결과는 %f 입니다.\n", (float)a/b);
  
  system("PAUSE");
  return 0;
}
