/* PROGRAM TO CHECK WHETHER A YEAR IS A LEAP YEAR OR NOT USING IF-ELSE IF LADDER */
#include <stdio.h>
int main()
{
    int year;
    printf("ENTER A YEAR");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0) {
    printf("Leap Year\n");
}
else if (year % 400 == 0) {
    printf("Leap Year\n");
}
else {
    printf("Not a Leap Year\n");
}
return 0;
}