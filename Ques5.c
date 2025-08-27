#include <stdio.h>

int main()
{
  float cel, fah;
  printf("Enter temperature in Celsius: \n");
  scanf("%f", &cel);

  fah = (cel * 1.8) + 32;

  printf("Temperature in Fahrenheit = %f\n", fah);

}

