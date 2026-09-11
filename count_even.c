/* PROGRAM TO INPUT 10 NUMBERS AND COUNT HOW MANY ARE EVEN */
#include <stdio.h>
int main()
{
    int n, i, count = 0;
    printf("Enter 10 numbers:\n");
    for(n=1; n<=10; n++)
    {
        scanf("%d",&i);
        if(i%2==0)
        {
            count++;
        }
    }
    printf("Number of even numbers: %d\n", count);
    return 0;
}