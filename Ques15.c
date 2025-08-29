#include <stdio.h>

int main()
{
 char ch;
 printf("Enter the character \n");
 scanf("%c", &ch);

 if(ch >= 'A' && ch <= 'Z')
 {
  printf("It is an uppercase letter \n");
 }
 else if(ch >= 'a' && ch <= 'z')
 {
  printf("It is a lowercase character \n");
 }
 else if(ch >= '0' && ch <= '9')
 {
  printf("It is a digit \n");
 }
 else
 {
  printf("It is a special character \n");
 }
}
