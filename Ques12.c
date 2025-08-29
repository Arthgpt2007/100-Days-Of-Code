#include <stdio.h>

int main()
{
 int num;
 printf("Enter the number \n");
 scanf("%d", &num);

 if(num > 0)
 {
  printf("It is a positive number \n");
 }
 else if(num < 0)
 {
  
  printf("It is a negative number \n");
 }
 else
 {
  printf("The number is Zero \n");
 }
}
