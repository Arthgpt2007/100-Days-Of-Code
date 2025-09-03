#include <stdio.h>

int main()
{
 int s1, s2, s3;

 printf("Enter the sides: \n");
 scanf("%d %d %d", &s1, &s2, &s3);

 if(s1 == s2 && s2 == s3 && s1 == s3)
 {
  printf("Equilateral \n");
 }
 else if(s1 != s2 | s1 != s3 && s2 == s3)
 {
  printf("Isosceles \n");
 }
 else if(s2 != s1 | s2 != s3 && s1 == s3)
 {
  printf("Isosceles \n");
 }
 else if(s3 != s1 | s3 != s2 && s1 == s2)
 {
  printf("Isosceles \n");
 }
 else
 {
  printf("Scalene \n");
 }
}
