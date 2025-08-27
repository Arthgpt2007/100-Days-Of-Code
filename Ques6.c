#include <stdio.h>

int main()
{
  int num1, num2, num3;
  printf("Enter two Numbers");
  scanf("%d  %d", &num1, &num2);
  num3 = num1;
  num1 = num2;
  num2 = num3;
  

  printf("After Swap: %d %d", num1, num2);
}
