#include<stdio.h>
int main()
{
	int no;
	printf("check odd no or even no:");
	scanf("%d,&no");
	
    (no % 2 == 0) ? printf("even number") : printf("odd number");
}
