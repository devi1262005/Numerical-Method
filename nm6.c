
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define f1(x,y,z) (85-6*y-z)/27
#define f2(x,y,z) (72-6*x-2*z)/15
#define f3(x,y,z) (110-x+y)/54
int main()
{
float x0, y0, z0, x1, y1, z1;
int count=1;
system("cls");
printf("\nCount\tx\ty\tz\n");
do
{ x0 = x1;
 y0 = y1;
 z0 = z1;
 x1 = f1(x1,y1,z1);
 y1 = f2(x1,y1,z1);
 z1 = f3(x1,y1,z1);
 printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);
 count++;
}
while(x0!=x1 && y0!=y1 && z0!=z1);
printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);
getch();
return 0;
}
