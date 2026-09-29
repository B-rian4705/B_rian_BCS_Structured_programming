#include <stdio.h>

int main() {
    float balance, withdrawal;

    printf("Enter your account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);

        balance = balance - withdrawal;

        printf("Remaining balance: %.2f\n", balance);
    }

    printf("Your account balance is zero or negative.\n");

    return 0;
}