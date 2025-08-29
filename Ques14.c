#include <stdio.h>

int main()
{
 char ch;
 printf("Enter the character \n");
 scanf("%c", &ch);

 if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
 {
  printf("It is a Vowel \n");
 }
 else
 {
  printf("It is a consonant \n");
 }
}
