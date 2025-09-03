#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c;
  int r1, r2;
  int dis;

  printf("Enter a,b and c(ax^2 + bx + c = 0 form)\n");
  scanf("%d %d %d", &a, &b, &c);
   
  dis = (b * b - 4 * a * c);

  r1 = (-b + sqrt(dis))/ (2 * a);
  
  r2 = (-b - sqrt(dis))/ (2 * a);


  if(dis > 0)
  {
   printf("Roots are real and different: %d %d\n", r1, r2);
  }
  else if(dis == 0)
  {
   printf("Roots are real and same: %d\n", r1);
  }
  else if(dis < 0)
  {
   printf("Roots are complex\n");
  }
 
}


