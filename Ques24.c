#include <stdio.h>

int main()
{
 int bill, units;

 printf("Enter number of units used \n");
 scanf("%d", &units);

 if(units <= 100)
 {
  bill = units * 5;
  printf("Bill: %d \n", bill);
 }
 else if(units > 100 && units <= 200)
 {
  bill = (100 * 5) + (units - 100) * 7;
  printf("Bill: %d \n", bill);
 }
 else if(units > 200 && units <= 300)
 {
  bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
  printf("Bill: %d \n", bill);
 }
 else
 {
  bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
  printf("Bill: %d \n", bill);
 }
}
