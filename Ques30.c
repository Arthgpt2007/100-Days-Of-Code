#include <stdio.h>

int main()
{
 int num, reverseNum = 0, tempNum;

 printf("Enter the number to reverse: \n");
 scanf("%d", &num);

 tempNum = num;

 while(num != 0)
 {
  int rem = num % 10;
  reverseNum = reverseNum * 10 + rem;
  num /= 10;
 }

 printf("Reverse: %d \n", reverseNum);
}
