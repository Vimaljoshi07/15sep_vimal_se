#include <stdio.h>
  
/* Function to print reverse of the passed string */
int reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
  
/* Driver program to test above function */
int main()
{
   char a[] = "ihsoj lamiv";
   reverse(a);
   return 0;
}
