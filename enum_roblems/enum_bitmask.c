#include <stdio.h>

typedef enum {READ = 1, WRITE, RWRITE, EXECUTE, FULL= 7} PERMITION;

int main() {
        
        int choice = 0;

        printf("Please choose permition: \n");
        printf("\n Read -> 1\n Write -> 2\n Read+Write -> 3\n Execute -> 4\n Full Permition -> 7\n: ");
    
        scanf("%d", &choice);

        switch (choice) {
            case READ : printf("You gave read permition.\n"); break;
            case WRITE : printf("Your gave write permition.\n"); break;
            case RWRITE : printf("You gave Read + Write permition.\n"); break;
            case EXECUTE : printf("You gave Execute permition.\n"); break;
            case FULL : printf("You gave Full Permitions.\n"); break;
            default : return 1;
        }

        return 0;
}
