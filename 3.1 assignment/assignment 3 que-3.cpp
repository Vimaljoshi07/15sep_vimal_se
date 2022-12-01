#include<stdio.h>
int main()
{
	float redious;
	printf("enter the value of redious:");
	scanf ("%f",&redious);
	
	
	//circle =  (pie=3.14 * R * R) 
	printf("\n area of circle is :%f",3.14 * redious * redious);
	

	float l,w;
	printf("\nenter the value of l & w:");
	scanf("%f%f",&l,&w);
		//area of rectangle =( l * W )
		printf("\n area of rectangle is :%f",l * w);
		
		
		
		
		float b,h;
		printf("\nenter the value of b & h:");
		scanf("%f%f",&b,&h);
		//area of triangle= b * h /2
		printf("\n area of triangle is :%f",b*h/2);
		
		
		
	}

