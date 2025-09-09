#include <stdio.h>

int HCF(int num1, int num2)
{
 while(num2 != 0)
 {
  int temp = num2;
  num2 = num1 % num2;
  num1 = temp;
 }
 return num1;
}

int main()
{
 int num1, num2;

 printf("Enter the numbers: \n");
 scanf("%d %d", &num1, &num2);

 int result = HCF(num1, num2);
 printf("GCD: %d\n", result);
}
