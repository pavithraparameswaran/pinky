#include<stdio.h>
int main()
{
int n,c,k;
printf("enter the roes:");
scanf("%d",&n);
for(c=1;c<=n;c++)
{
for(k=1;k<=c;k++)
printf("*");
printf("\n");
}
}
