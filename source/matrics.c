/* 
    
    Written By Anirudh Singh
    Github : https://github.com/violentanirudh/c
    
    A program to perform matric operations. (Incomplete)

*/

#include<stdio.h>

int main()
{

    int count;

    printf("Enter a number to create Square Matrix : ");
    scanf("%d", &count);

    int matrix[count][count];

    printf("Enter Value Of Matrix : \n");
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
}