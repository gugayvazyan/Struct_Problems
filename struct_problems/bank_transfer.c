#include <stdio.h>


typedef struct {
    float balance;
    int ownerId;
} Account;

int main() {
    Account acc1, acc2;
    
    printf("Enter balance and owner ID for Account 1: " );
    scanf("%f %d", &acc1.balance, &acc1.ownerId);

    printf("Enter balance and owner ID for Account 2: ");
    scanf("%f %d", &acc2.balance, &acc2.ownerId);

    printf("\nBefore Transfer:\n");
    printf("Owner ID: %d, Balance: %.2f\n", acc1.ownerId, acc1.balance);
    printf("Owner ID: %d, Balance: %.2f\n", acc2.ownerId, acc2.balance);


    float transferAmount = acc1.balance * 0.2;
    acc1.balance -= transferAmount;
    acc2.balance += transferAmount;
    
    printf("\nAfter Transfer:\n");
    printf("Owner ID: %d, Balance: %.2f\n", acc1.ownerId, acc1.balance);
    printf("Owner ID: %d, Balance: %.2f\n", acc2.ownerId, acc2.balance);

    return 0;

}

