/* 
    
    Written By Anirudh Singh
    Github : https://github.com/violentanirudh/c
    
    Find factorial of a number.

*/

#include<stdio.h>

long factorial(long n)
{

    return (n == 1) ? n : (n * factorial(n - 1));

}

void main()
{
    int num;

    if (num > 0)
    {
        printf("Enter a number : ");
        scanf("%d", &num);

        printf("Factorial of %d is %ld \n", num, factorial(num));
    } 
    else
    {
        printf("Please enter a number greater than 0");
    }

}