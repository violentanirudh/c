/* 
    
    Written By Anirudh Singh
    Github : https://github.com/violentanirudh/c
    
    A Simple Calculator with addition, substraction,  multiplication and divison.

*/

#include<stdio.h>

int main() 
{
    int a, b, operator;

    printf("First Number : ");
    scanf("%d", &a);
    printf("Second Number : ");
    scanf("%d", &b);

    if ((a < 0 || a > 1000) && (b < 0 || b > 1000))
    {
        printf("\nNumbers must greater than 0 and less than 1000 \n");
        return 0;
    }

    printf("Choose Operator : \n\t 1. Addition \n\t 2. Substraction \n\t 3. Multiplication \n\t 4.Division \nEnter Operator : ");
    scanf("%d", &operator);

    if (operator >= 1 && operator <= 4)
    {
        printf("Your answer is : ");
    }
    else
    {
        printf("Invalid Operator Selection.");
        return 0;
    }
    

    if (operator == 1)
    {
        printf("%d", a + b);
    }
    else if (operator == 2)
    {
        printf("%d", a - b);
    }
    else if (operator == 3)
    {
        printf("%d", a * b);
    }
    else
    {
        printf("%.2f", a / (float) b);
    }

    printf("\n");
    return 1;

}