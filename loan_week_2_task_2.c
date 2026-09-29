#include <stdio.h>

int main() {
    int age;
    float income;
    float principal, time, rate, simpleInterest;

    // Bank loan eligibility
    printf(" BANK LOAN ELIGIBILITY \n");

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%f", &income);

    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    // Simple Interest
    printf(" SIMPLE INTEREST \n");

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time: ");
    scanf("%f", &time);

    printf("Enter the rate: ");
    scanf("%f", &rate);

    simpleInterest = (principal * time * rate) / 100;

    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}