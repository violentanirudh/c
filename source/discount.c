/* 
    
    Written By Anirudh Singh
    Github : https://github.com/violentanirudh/c
    
    A Simple Discount Calculator.

*/

#include<stdio.h>

__int64_t main()
{

    float amount, discount, total;

    printf("Enter amount : ");
    scanf("%f", &amount);

    if (amount > 0)
    {
        
        printf("Enter discount percentage : ");
        scanf("%f", &discount);

        if (discount > 0 && discount < 100)
        {

            total = amount * ((100 - discount) / 100);

            printf("Total Amount : %.2f\n", total);

        }
        else
        {
            printf("Enter a valid discount percentage.\n");
            return 0;
        }

    }
    else
    {
        printf("Enter a valid amount.\n");
        return 0;
    }

    return 1;
    
}