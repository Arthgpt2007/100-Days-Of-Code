#include <stdio.h>

int main()
{
 int num, sum = 0;

 printf("Enter the number: \n");
 scanf("%d", &num);

 int tempNum = num;

 while(tempNum != 0)
 {
  int rem = tempNum % 10;
  sum += rem;
  tempNum /= 10;
 }

 printf("Sum: %d \n", sum);
}
