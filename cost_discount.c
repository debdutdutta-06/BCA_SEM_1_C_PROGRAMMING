/* PROGRAM TO CALCULATE NET AMOUNT WITH DISCOUNT BASED ON COST AND QUANTITY USING IF-ELSE */
#include <stdio.h>
int main()
{
    int cost, quantity,amount, net_amount;
    printf("ENTER COST AND QUANTITY OF PRODUCT");
    scanf("%d%d", &cost,&quantity);
    amount = cost*quantity;
    if (amount>500)
    {
        net_amount = amount-(amount*20/100);
        printf("\nNET AMOUNT AFTER 20 PERCENT DISCOUNT IS : %d", net_amount);

    }
    else
    {
        net_amount = amount-(amount*10/100);
        printf("\nNET AMOUNT AFTER 10 PERCENT DISCOUNT IS : %d", net_amount);
    }
    return 0;
}