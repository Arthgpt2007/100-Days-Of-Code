#include <stdio.h>

int Factors(int num)
{
 for(int i = 1; i <= num; i++)
 {
  if(num % i == 0)
  {
   printf("%d,", i);
  }
 }
}

int main()
{
 int num;

 printf("Enter the number \n");
 scanf("%d", &num);

 Factors(num);
}
