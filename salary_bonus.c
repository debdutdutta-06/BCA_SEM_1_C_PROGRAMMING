/* PROGRAM TO CALCULATE BONUS BASED ON SALARY AND EXPERIENCE */
#include <stdio.h>
int main()
{
    float salary, bonus;
    int experience;
    printf("Enter your salary: ");
    scanf("%f", &salary);
    printf("Enter your years of experience: ");
    scanf("%d", &experience);
    if(experience > 10)
        bonus = 0.50 * salary;
    else if(experience >= 5)
        bonus = 0.40 * salary;
    else
        bonus = 0.30 * salary;
    printf("Your bonus is: %.2f\n", bonus);
    return 0;
}