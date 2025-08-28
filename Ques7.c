#include <stdio.h>

int main()
{
  int num1, num2;

  printf("Enter First Number: \n");
  scanf("%d", &num1);


  printf("Enter Second Number: \n");
  scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After Swap: %d %d\n", num1, num2);
  

}
