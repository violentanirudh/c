/* 
    
    Written By Anirudh Singh
    Github : https://github.com/violentanirudh/c
    
    A program to find average of multiple numbers.

*/

#include<stdio.h>

int main()
{
    int queue, num, sum;

    sum = 0;

    printf("Enter the count of numbers : ");
    scanf("%d", &queue);

    for (int i = 0; i < queue; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &num);
        sum += num;
    }
    
    printf("Average of the numbers : %.2f\n", sum / (float) queue);

    return 1;
}