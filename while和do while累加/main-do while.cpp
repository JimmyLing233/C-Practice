#include <stdio.h>
int main()
{
    int sum,i;
    i = 1;
    sum = 0;
    do
    {
        sum+=i;
        i++;
    } while (i<=100);
    printf ("%d\n",sum);
    return 0;
}
