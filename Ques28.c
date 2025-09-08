#include <stdio.h>

int main()
{
 int product = 1;
 int n;

 printf("Enter n \n");
 scanf("%d", &n);

 for(int i = 2; i <= n; i += 2)
 {
  product *= i;
 }
 printf("Product: %d \n", product);
}

