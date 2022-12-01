#include<stdio.h>
int main()
{
	int days;
	printf("1.monday\n2.tuesday\n3.wednesday\n4.thursday\n5.friday\n6.saturday\n7.sunday");
	printf ("\nenter no.");
	scanf("%d",&days);
	switch(days)
	
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saturday");
			break;
		case 7:
			printf("sunday");
			break;
		default:
		 printf("\n check the day");
		 break;
	}
}
