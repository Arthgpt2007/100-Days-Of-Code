#include <stdio.h>

int main()
{
 int sec, hours, min, remSec;

 printf("Enter Seconds: \n");
 scanf("%d", &sec);

 hours = sec / 3600;

 remSec = sec - (hours*3600);

 min = remSec / 60;

 remSec = remSec - (min * 60);

 sec = remSec;

 printf("%d hours : %d minutes : %d seconds\n",hours, min, sec);
}

