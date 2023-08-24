/* Programmer  :Vikash Kumar Thakur
   Topic       :WAP to print square of the first 10 natural number
   IDE         :VS Code
*/
#include <stdio.h>
int main()
{
    int i = 1, x;
    while (i <= 10)
    {
        x = i * i;
        printf("%d ", x);
        i++;
    }
    return 0;
}