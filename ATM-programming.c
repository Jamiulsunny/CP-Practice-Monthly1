                                                                       This is a ATM program.
#include <stdio.h>

int main() {
    int pin;
    int option;
    float balance = 10000.00;
    float amount;

    printf("Enter Pin : ");
    scanf("%d",&pin);
    printf("1. Check Your Balance\n");
    printf("2. Deposit Your Money\n");
    printf("3. Withdraw Your Money\n");

    printf("Enter option: ");
    scanf("%d", &option);

    if (option == 1) {
        printf("Your current balance is: %.2f\n", balance);
    }
    else if (option == 2) {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        if (amount > 0)
        {  balance =balance+amount;
            printf("New balance after Deposit: %.2f\n", balance);
        }
    }
    else if (option == 3) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        if (amount > 0 && amount <= balance)
        {  balance =balance- amount;
           printf("New balance  after Withdraw: %.2f\n", balance);
        }
        else if (amount > balance) {
            printf("You don't have sufficient balance!\n");
        }

    }

    else {
        printf("Invalid option! \n");
    }


}


