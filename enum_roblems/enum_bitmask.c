#include <stdio.h>

typedef enum {READ = 1, WRITE, EXECUTE=4} PERMITION;

int main() {

        int choice = 0;

        printf("Please choose permition: \n");
        printf("\n Read -> 1\n Write -> 2\n Read&Write -> 3\n Execute -> 4\n Read&Execute -> 5\n Write&Execute -> 6\n Full Permition -> 7\n : ");
        scanf("%d", &choice);

        switch (choice) {
            case READ : printf("You gave read permition.\n"); break;
            case WRITE : printf("Your gave write permition.\n"); break;
            case READ + WRITE : printf("You gave Read + Write permition.\n"); break;
            case EXECUTE : printf("You gave Execute permition.\n"); break;
            case READ + EXECUTE : printf("You gave Read + Execute permition.\n"); break;
            case WRITE + EXECUTE : printf("You gave Write + Execute permition.\n"); break;
            case READ + WRITE + EXECUTE : printf("You gave Full permitions.\n");

            default : return 1;
        }

        return 0;
}