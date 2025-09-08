#include <stdio.h>

int main()
{
 int days, fine;

 printf("Enter number of days late \n");
 scanf("%d", &days);

 if(days <= 5)
 {
  fine = days * 2;
  printf("Fine %d \n", fine);
 }
 else if(days > 5 && days <= 10)
 {
  fine = 10 + (days - 5) * 4;
  printf("Fine %d \n", fine);
 }
 else if(days > 10 && days <= 30)
 {
  fine = 10 + 20 + (days - 10) * 6;
  printf("Fine %d \n", fine);
 }
 else
 {
  printf("Membership Cancelled \n");
 }

}
