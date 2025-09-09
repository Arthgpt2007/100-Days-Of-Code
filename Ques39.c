#include <stdio.h>

int main()
{
 int product = 1;
 int num;
 int count = 0;

 printf("Enter the number: \n");
 scanf("%d", &num);

 int tempNum = num;

 while(tempNum != 0)
 {
  int rem = tempNum % 10;
  if(rem % 2 != 0)
  {
   product *= rem;
  }
  else
  {
   product *= 1;
  }
  tempNum /= 10;
 }

 printf("Product: %d \n", product);
}
