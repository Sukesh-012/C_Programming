#include<stdio.h>
void main()
{
	char str[10];
	int n;
	printf("enter the string");
	scanf("%s",&str);
	n=strlen(str);
	printf("all the possibe permutation :");
	int i;
	if(l==r)
	printf("%s/n",str);
	else
	{
		for(i=1;i<=r;i++)
		swap((a+i),(a+l));
		permutate(a,l+1,r);
	}
}
