#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1: printf("sunday"); break;
        case 2: printf("monday"); break;
        case 3: printf("Tuesday"); break;
        case 4: printf("wednesday"); break;
        case 5: printf("thursday"); break;
        case 6: printf("friday"); break;
        case 7: printf("Saturday"); break;

        default:
            printf("Invalid number");
    }

    return 0;
}
