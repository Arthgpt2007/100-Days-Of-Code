#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
 if(num == 2)
 {
  return true;
 }
 for(int i = 2; i <= num / 2; i++)
 {
  if(num % i == 0)
  {
   return false;
  }
 }
 return true;
}

int main()
{
 int num;

 printf("Enter the number to check \n");
 scanf("%d", &num);

 if(isPrime(num))
 {
  printf("It is a Prime number \n");
 }
 else
 {
  printf("It is not a Prime Number \n");
 }
}
