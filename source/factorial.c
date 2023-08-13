#include<stdio.h>

long factorial(long n)
{

    return (n == 1) ? n : (n * factorial(n - 1));

}

void main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Factorial of %d is %ld \n", num, factorial(num));

}