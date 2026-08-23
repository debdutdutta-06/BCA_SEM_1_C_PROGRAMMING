/* PROGRAM TO CHECK WHETHER A CHARACTER IS A DIGIT OR NOT USING IF-ELSE */
#include <stdio.h>
int main()
{
    char character;
    printf("Enter a character:");
    scanf("%c", &character);
    if (character>="0" && character<="9")
    {
        printf("\nTHE CHARACTER IS A DIGIT");
    }
    else
    {
        printf("\nTHE CHARACTER IS NOT A DIGIT");
    }
    return 0;
}