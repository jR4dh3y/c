#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 4
#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

typedef struct {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    int balance;
} User;

User users[MAX_USERS] = {
    {"user1", "pass1", 1000},
    {"user2", "pass2", 2000},
    {"user3", "pass3", 3000},
    {"admin", "admin", 0}
};

int login() {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    printf("Username: ");
    scanf("%s", username);

    printf("Password: ");
    scanf("%s", password);

    for (int i = 0; i < MAX_USERS; i++) {
        if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0) {
            return i;
        }
    }

    return -1;
}

void deposit(int userIndex) {
    int amount;
    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    users[userIndex].balance += amount;
    printf("Deposit successful. New balance: %d\n", users[userIndex].balance);
}

void withdraw(int userIndex) {
    int amount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount > users[userIndex].balance) {
        printf("Insufficient balance.\n");
    } else {
        users[userIndex].balance -= amount;
        printf("Withdrawal successful. New balance: %d\n", users[userIndex].balance);
    }
}

void checkBalance(int userIndex) {
    printf("Current balance: %d\n", users[userIndex].balance);
}

void edit(int userIndex) {
    char newPassword[MAX_PASSWORD_LENGTH];
    printf("Enter new password: ");
    scanf("%s", newPassword);

    strcpy(users[userIndex].password, newPassword);
    printf("Password updated successfully.\n");
}

int main() {
    int userIndex = login();

    if (userIndex == -1) {
        printf("Invalid username or password.\n");
        return 0;
    }

    int choice;
    do {
        printf("\nOptions:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Edit Password\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deposit(userIndex);
                break;
            case 2:
                withdraw(userIndex);
                break;
            case 3:
                checkBalance(userIndex);
                break;
            case 4:
                edit(userIndex);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
