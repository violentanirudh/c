/* 
    
    Written By Anirudh Singh
    Github : https://github.com/violentanirudh/c
    
    PaySlip Calculator.

*/

#include<stdio.h>

#define DA 10
#define HRA 7.50
#define MA 300
#define PF 12.50

void main()
{

    float basic, gross, net;

    printf("Enter Basic Pay : ");
    scanf("%f", &basic);

    gross = basic + MA + (((DA + HRA)/100) * basic);
    net = gross - ((PF/100) * basic);

    printf("Pay Slip\n---\nBasic Pay : %.2f\nGross Pay : %.2f\nNet Pay   : %.2f\n", basic, gross, net);

}