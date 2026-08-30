/* PROGRAM TO PERFORM CIRCLE OPERATIONS USING SWITCH-CASE */
#include <stdio.h>
int main()
{
    int choice;
    float radius, diameter, area, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("choose an operation to perform:\n");
    printf("1. Calculate diameter\n");
    printf("2. Calculate area\n");
    printf("3. Calculate perimeter\n");
    printf("Enter your choice 1 or 2 or 3: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        diameter = 2*radius;
        printf("Diameter of the circle: %.2f\n", diameter);
        break;
        case 2:
        area = 3.14*radius*radius;
        printf("Area of the circle: %.2f\n", area);
        break;
        case 3:
        perimeter = 2*3.14*radius;
        printf("perimeter of the circle: %.2f\n", perimeter);
        break;
        default:
        printf("Invalid choice! Please select a valid operation.\n");
        return 0;
  
    }
}   