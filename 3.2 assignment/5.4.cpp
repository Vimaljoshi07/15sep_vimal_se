#include <stdio.h>

int main()
{
    int i, n;
    
    /* Input upper limit from user */
    printf(" enter number: ");
    scanf("%d", &n);

    printf(" odd numbers in 1 to  %d : \n", n);

    /* Start loop from 1 and increment it by 1 */
    for(i=1; i<=n; i++)
    {
        /* If 'i' is odd then print it */
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    
	}
}
