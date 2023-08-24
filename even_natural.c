/* Programmer  :Vikash Kumar Thakur
   Topic       :WAP to print the first 10 even natural number
   IDE         :VS Code
*/
#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 20)
    {
        if (i % 2 == 0)
            printf("%d ", i);
        i++;
    }
    return 0;
}