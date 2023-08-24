/* Programmer  :Vikash Kumar Thakur
   Topic       :WAP to print the first 10 odd natural number in reverse order.
   IDE         :VS Code
*/
#include <stdio.h>
int main()
{
    int i = 19;
    while (i >= 1)
    {
        if (i % 2 != 0)
            printf("%d ", i);
        i--;
    }
    return 0;
}