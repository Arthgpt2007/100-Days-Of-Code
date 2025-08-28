#include <stdio.h>

int main()
{
 int n, sum;
 sum = 0;
 printf("Enter n: \n");
 scanf("%d", &n);

 for(int i = 1; i <= n; i++)
 {
   sum = sum + i;
 }

 printf("Sum: %d", sum);
}
