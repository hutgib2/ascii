#include <stdio.h>

int main(void) {
    char letter;
    printf("input letter: ");
    scanf("%c", &letter);
    if (letter >= 'a' && letter <= 'z')
        printf("%d", letter-96);
    else
        printf("%c is not a letter in the alphabet", letter);
}