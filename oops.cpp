#include <stdio.h>

int main() {
    int choice;

    printf("Select a programming language:\n");
    printf("1. C\n");
    printf("2. C++\n");
    printf("3. Java\n");
    printf("4. Python\n");
    printf("5. HTML\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You selected C.\n");
            break;
        case 2:
            printf("You selected C++.\n");
            break;
        case 3:
            printf("You selected Java.\n");
            break;
        case 4:
            printf("You selected Python.\n");
            break;
        case 5:
            printf("You selected HTML.\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
            break;
    }

    return 0;
}
