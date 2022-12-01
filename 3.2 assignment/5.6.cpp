#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf ("enter number:");
	scanf("%d",&n);
	for(i=1; i<=n; i+=2)
	{
		sum = sum + i;
	}
	
	printf("sum of odd number:%d",sum);
	
	
	}
