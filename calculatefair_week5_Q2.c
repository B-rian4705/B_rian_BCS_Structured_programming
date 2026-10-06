#include <stdio.h>

float calculateFare(float distance)
{
    return distance * 50;
}

int main()
{
    float distance, fare;

    printf("Enter distance traveled in km: ");
    scanf("%f", &distance);

    fare = calculateFare(distance);

    printf("Total Fare = KSh. %.2f\n", fare);

    return 0;
}