#include <stdio.h>

 
int main()
{
     float days;
    float years;
 
    printf("Enter the number of days:");
    scanf("%f", &days);
    years = days / 365;
   
    printf("\nno of years:%f",years);
    
    printf("\nenter the number of years:");
     scanf("%f",&years);
     
     days =  365 * years ;
     
     printf("\nno of days:%f",days);
}

