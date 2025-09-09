#include <stdio.h>

int main()
{
 int num, reverseNum = 0;
 int tempNum; 

 printf("Enter the number to check: \n");
 scanf("%d", &num);
 tempNum = num;

 while(tempNum != 0)
 {
  int rem = tempNum % 10;
  reverseNum = reverseNum * 10 + rem;
  tempNum /= 10;
 }

 if(reverseNum == num)
 {
  printf("It is a Palindrome Number \n");
 }
 else
 {
  printf("It is not a Palindrome number \n");
 }
 
 
}
