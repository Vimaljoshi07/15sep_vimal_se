#include<stdio.h>
int main()
{
	int i,no,sum=0;
	printf("table of print:");
	scanf("%d",&no);
	printf("\ntable print	:%d",no);
	
	for ( i = 1; i <= 10; i++)  
	{  
        printf ("\n %d * %d = %d", no, i, (no*i));  
    }  
}
