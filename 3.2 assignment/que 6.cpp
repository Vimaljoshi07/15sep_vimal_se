#include<stdio.h>
int main()
{
	int i,no,factor=1;
	printf("enter number:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
	factor=factor*i;    
   }    
  printf("Factorial of %d is: %d",no,factor);   
	
}
