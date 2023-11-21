#include <stdio.h>

int main() {
    char mood;

    printf("What is your mood? (h, s, a, d) : ");
    scanf("%c", &mood);

    switch (mood) {
        case 'h':
            printf("You are happy.\n");
            break;
        case 's':
            printf("You are sad.\n");
            break;
        case 'a':
            printf("You are angry.\n");
            break;
        case 'd':
            printf("You are depressed.\n");
            break;
        default:
            printf("Invalid mood.\n");
    }

    return 0;
}