/* 
    
    Written By Anirudh Singh
    Github : https://github.com/violentanirudh/c
    
    A program to calculate sum of digits of a number.

*/

#include<stdio.h>

void main()
{

    int num, sum = 0, unit;

    printf("Enter the number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        unit = num % 10;
        sum += unit;
        num = (num - unit) / 10;
    }
    
    printf("Sum : %d\n", sum);

}