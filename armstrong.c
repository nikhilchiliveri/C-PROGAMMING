
#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,sum=0,num,l=0;
	printf("enter the no");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		l++;
		n=n/10;
	}
	n=num;
	while(n!=0)
	{
		r=n%10;
		sum=sum+pow(r,1);
		n=n/10;
	}
	if(sum==num)
     printf("%d is a armstrong no",num);
    else
    printf("%d is not armstrong no",num);
	return 0;
}
