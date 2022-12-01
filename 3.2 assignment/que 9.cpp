#include <stdio.h>
int main()
{
    int A, B, C, D;
 
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &A, &B, &C , &D);
 
    if (A >= B) 
    {
        if (A >= D)
            printf("%d is the largest number.", A);
        else
            printf("%d is the largest number.", D);
    }
    else {
        if (B >= D)
            printf("%d is the largest number.", B);
        else
            printf("%d is the largest number.", D);
    }
}
