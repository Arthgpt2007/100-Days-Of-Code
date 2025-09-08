#include <stdio.h>

int main()
{
 int fact = 1, num;

 printf("Enter num \n");
 scanf("%d", &num);

 for(int i = num; i > 0; i--)
 {
  fact *= i;
 }
 printf("Factorial: %d \n", fact);
}


