#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b;
  
  printf("���ڸ� �Է��ϼ��� : ");
  scanf("%i", &a);
  printf("�и� �Է��ϼ��� : ");
  scanf("%i", &b);
  
  printf("�������� ����� %f �Դϴ�.\n", (float)a/b);
  
  system("PAUSE");
  return 0;
}
