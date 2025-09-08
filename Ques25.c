#include <stdio.h>

int main()
{
 char operator;
 float num1, num2, result;

 printf("Enter Operator: \n");
 scanf("%c", &operator);

 printf("Enter two numbers \n");
 scanf("%f %f", &num1, &num2);


 switch(operator)
 {
	 case '+':
		 result = num1 + num2;
		 printf("%f + %f = %f \n", num1, num2, result);
		 break;
	 case '-':
		 result = num1 - num2;
		 printf("%f - %f = %f \n", num1, num2, result);
		 break;
	 case '*':
		 result = num1 * num2;
		 printf("%f * %f = %f \n", num1, num2, result);
		 break;
	 case '/': 
		 if(num2 != 0)
		 {
		  result = num1 / num2;
		  printf("%f / %f = %f \n", num1, num2, result);
		 }
		 else
		 {
		  printf("Cannot divide by zero \n");
		 }
		 break;
         case '%':
	         if((int)num2 != 0)
		 {
		  result = (int)num1 % (int)num2;
		  printf("%f modulus %f = %f \n", num1, num2, result);
		 }
		 else
		 {
		  printf("Modulus by zero is not allowed \n");
		 }
		 break;
         default:
	        printf("Invalid Operation \n");
 }
 
}

