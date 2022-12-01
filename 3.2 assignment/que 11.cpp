#include<stdio.h>
int main()
{
	int n, sum=0,first digit, last digit;
	printf("%d",&n);
	
	//find last digit of number//
	lastDigit = n % 10;
	
	  while(n >= 10)
	  {
        n = n / 10;
      }
      firstDigit = n;
      //Calculate sum of first and last digit
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);

	

}
