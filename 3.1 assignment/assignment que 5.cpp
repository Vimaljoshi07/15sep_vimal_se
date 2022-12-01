#include<stdio.h>
int main()
{
	int year;
	printf("enter a year:");
	scanf("%d",&year);
	
	if (year%4==0)
	{
	 printf("\n this is leap year");
	}
	else
	{
		printf("\n this is not leap year");
	}
}
