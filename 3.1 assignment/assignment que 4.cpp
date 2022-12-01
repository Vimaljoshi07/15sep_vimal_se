#include<stdio.h>
int main()
{   //simple  intrest
	int  principle,rate, n , intrest;
	printf("enter value of principle, rate,n:");
	scanf("%d%d%d",&principle,&rate,&n);
	
	intrest = principle * rate * n / 100;
	printf("the simplse inrest is :%d",intrest);
}
