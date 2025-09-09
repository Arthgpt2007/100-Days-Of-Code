#include <stdio.h>

int main()
{
 int num, binary;

 printf("Enter the number: \n");
 scanf("%d", &num);

 binary = BinaryConversion(num);
 printf("The Binary conversion: %d\n", binary);
}

int BinaryConversion(int num)
{
 if(num == 0)
 {
  return 0;
 }
 else
 {
  return (num % 2) + 10 * BinaryConversion(num / 2);
 }
}
