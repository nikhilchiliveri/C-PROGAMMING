#include<stdio.h>
int main()
{
	int n,i,x1=0,x2=1,x;
	printf("enter n values");
	scanf("%d",&n);
	printf("%d\t%d\t",x1,x2);
	for(i=3;i<=n;i++)
	{
		x=x1+x2;
		printf("%d\t",x);
		x1=x2;
		x2=x;
	}
	return 0;
}
