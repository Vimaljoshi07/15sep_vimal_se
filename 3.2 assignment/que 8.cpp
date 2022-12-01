#include<stdio.h>
int main()
{
	int a, reverse =0, remainder;
	printf("enter number:");
	scanf("%d",&a);
	
	while (a != 0)
	{
		remainder=a % 10;
		reverse= reverse * 10 + remainder;
		a/= 10;
			
	}
	
  	printf("Reversed number = %d", reverse);
}
