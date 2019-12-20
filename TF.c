#include<stdio.h>
int main()
{
	int x=200,y=200;
	if((x-=100)||(y-=100))
printf("x=%d and y=%d",x,y);
else
printf("x=%d and y=%d",x,y);
return 0;
}
exp1  exp2  exp1&&exp2  exp1||exp2  !exp1
T       T       T            T        F
T       F       F            T        F
F       T       F            T        T
F       F       F            F        T
