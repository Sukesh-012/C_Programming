#include<stdio.h>
 int main()
{

int i,j,n;
char a;
printf("enter the character to be printed:");
scanf("%c",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%c",a);
}
printf("\n");
}
return 0;
}
