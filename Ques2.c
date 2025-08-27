#include <stdio.h>

int main()
{
  int num1, num2, sum, diff, pro, quo;
  printf("Enter two Numbers");
  scanf("%d\n  %d\n", &num1, &num2);
  sum = num1 + num2;
  diff = num1 - num2;
  pro = num1 * num2;
  if(num2 == 0)
  {
    quo = 0; 
  }
  else if(num1 == 0)
  {
    quo = 0;
  }
  else
  {
    quo = num1 / num2;
  }

  printf("Sum = %d\n", sum); 
  printf("Product =  %d\n", pro);
  printf("Difference = %d\n", diff);
  printf("Quotient = %d\n", quo); 
  

}
