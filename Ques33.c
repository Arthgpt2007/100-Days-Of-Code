#include <stdio.h>

int main()
{
 int num, sum = 0;

 printf("Enter the number to check \n");
 scanf("%d", &num);
 int tempNum = num;

 while(tempNum != 0)
 {
  int rem = tempNum % 10;
  int cube = rem * rem * rem;
  sum += cube;
  tempNum /= 10;
 }

 if(sum == num)
 {
  printf("It is an armstrong number \n");
 }
 else
 {
  printf("It is not an Armstrong number \n");
 }
}
