#include<stdio.h>

int main() {

    float p, r, n; 

    // n is years
    // p is principle
    // r is rate

    printf("Enter principle amount : ");
    scanf("%f", &p);

    printf("Enter interest rate : ");
    scanf("%f", &r);

    printf("Enter years : ");
    scanf("%f", &n);

    printf("---\nFinal Amount after %0.f years at %2.f interest is %.2f \n", n, r, p + (p * n * r) / 100);
	
}
