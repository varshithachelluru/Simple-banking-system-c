#include <stdio.h>

/* Function declarations */
void createAccount(char name[]);
void deposit(int *balance);
void withdraw(int *balance);
void checkBalance(int balance);

int main() {
    int choice;
    int balance = 0;
    char name[50];

    while (1) {
        printf("\n--- Simple Banking System ---\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            createAccount(name);
        }
        else if (choice == 2) {
            deposit(&balance);
        }
        else if (choice == 3) {
            withdraw(&balance);
        }
        else if (choice == 4) {
            checkBalance(balance);
        }
        else if (choice == 5) {
            printf("Thank you for using the banking system.\n");
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

/* Function to create account */
void createAccount(char name[]) {
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Account created successfully for %s\n", name);
}

/* Function to deposit money */
void deposit(int *balance) {
    int amount;
    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    if (amount > 0) {
        *balance = *balance + amount;
        printf("Deposit successful!\n");
    } else {
        printf("Invalid amount!\n");
    }
}

/* Function to withdraw money */
void withdraw(int *balance) {
    int amount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount > *balance) {
        printf("Insufficient balance!\n");
    } else if (amount <= 0) {
        printf("Invalid amount!\n");
    } else {
        *balance = *balance - amount;
        printf("Withdrawal successful!\n");
    }
}

/* Function to check balance */
void checkBalance(int balance) {
    printf("Current balance: %d\n", balance);
}
