#include<stdio.h>

float calculator(float distance, float time);
float converter(float speed);

int main(void)
{

    float distance, time, speed;

    printf("Enter Distance (metres) : ");
    scanf("%f", &distance);

    printf("Enter Time (seconds) : ");
    scanf("%f", &time);

    if (distance > 0 && time > 0)
    {
        speed = calculator(distance, time);

        printf("Speed (m/s) : %.2f \nSpeed (km/h) : %.2f\n", speed, converter(speed));

    }
    else
    {
        printf("Distance and Time must be positive.\n");
    }

    return 0;
    
}

float calculator(float distance, float time)
{
    return distance / time;
}

float converter(float speed)
{
    return speed * (18 / 5);
}