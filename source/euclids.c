/* 
    
    Written By Anirudh Singh
    Github : https://github.com/violentanirudh/c
    
    Euclid's Division Algorithm.

*/

#include<stdio.h>

int main()
{

    int a, b, c, r, q;

    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter a number : ");
    scanf("%d", &b);

    if (a < b)
    {
        c = b;
        b = a;
        a = c;
    }

    printf("---\n");

    do
    {
        
        r = a % b;
        q = (a - r) / b;

        printf("%d = %d * %d + %d\n", a, b, q, r);

        a = b;
        b = r;

    } while (r > 0);
    
    return 1;
    
}