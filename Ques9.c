#include <stdio.h>
#include <math.h>

int main()
{
 float prin, rate, time, simple, comp;

 printf("Enter Principal: \n");
 scanf("%f", &prin);

 printf("Enter Rate: \n");
 scanf("%f", &rate);

 printf("Enter Time: \n");
 scanf("%f", &time);

 simple = (prin * rate * time) / 100;
 comp = prin * pow((1 + rate/100), time) - prin; 

 printf("Simple Interest = %f\n", simple);
 printf("Compound Interest = %f\n", comp);
}
