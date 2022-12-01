#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enetr no:");
	scanf("%D",&n);
	
	for (i=2; i<=n; i+=2)
	{
		sum +=i;
		
	}
	
	
	printf("sum of even number:%d",sum,n);
	
	}
