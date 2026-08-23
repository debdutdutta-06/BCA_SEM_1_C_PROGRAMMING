/* PROGRAM TO CHECK TRIANGLE TYPE (EQUILATERAL/ISOSCELES/SCALENE) USING ELSE IF LADDER */
#include <stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter side 1, side 2 and side 3 of triangle");
    scanf("%d%d%d",&s1,&s2,&s3);
    if (s1==s2 && s2==s3)
    {
        printf("\nTRIANGLE IS EQUILATERAL");
    }
    else if (s1==s2 || s2==s3 || s1==s3)
    {
        printf("\nTRIANGLE IS ISOSCELES");
    }
    else
    {
        printf("\nTRIANGLE IS SCALENE");
    }
    return 0;
}