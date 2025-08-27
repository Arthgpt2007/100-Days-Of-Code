#include <stdio.h>

int main()
{
  int len, bre, area, peri;

  printf("Enter Length: \n");
  scanf("%d", &len);


  printf("Enter Breadth: \n");

  scanf("%d", &bre);
  
  area = (len * bre);
  peri = 2*(len + bre);

  printf("Area = %d\n", area);

  printf("Perimeter = %d\n", peri);
}

