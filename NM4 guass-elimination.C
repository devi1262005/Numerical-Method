#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int i,j,k,n;
float a[10][10], x[10], r;
system("cls");
printf("Enter the values:\n\n");
n=3;
for(i=1;i<=n;i++)
{
for(j=1;j<=n+1;j++)
{
printf("a[%d][%d] = ",i,j);
scanf("%f", &a[i][j]);
}
}
for(i=1;i<=n-1;i++)
{
if(a[i][i] == 0.0)
{
printf("Error");
exit(0);
}
for(j=i+1;j<=n;j++)
{
r = a[j][i]/a[i][i];
for(k=1;k<=n+1;k++)
{
a[j][k] = a[j][k] - r*a[i][k];
}
}
}
x[n] = a[n][n+1]/a[n][n];
for(i=n-1;i>=1;i--)
{
x[i] = a[i][n+1];
for(j=i+1;j<=n;j++)
{
x[i] = x[i] - a[i][j]*x[j];
}
x[i] = x[i]/a[i][i];
}
printf("\nAnswer:\n");

printf("x = %0.3f\n", x[1]);
printf("y = %0.3f\n", x[2]);
printf("z = %0.3f\n", x[3]);
getch();
return(0);
}