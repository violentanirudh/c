/* 
    
    Written By Anirudh Singh
    Github : https://github.com/violentanirudh/c
    
    Find Minimum and Maximum Values.

*/

#include<stdio.h>

int main()
{

    int min, max, nums, value;

    printf("Enter count of numbers : ");
    scanf("%d", &nums);

    if (nums <= 0)
    {
        printf("Invalid Count!");
        return 2;
    }
    

    for (int i = 0; i < nums; i++)
    {
        printf("Enter number : ");
        scanf("%d", &value);

        if (value < min)
        {
            min = value;
        }

        if (value > max)
        {
            max = value;
        }
        
    }

    printf("Minimum : %d\nMaximum : %d\n", min, max);

}