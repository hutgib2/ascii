#include <stdio.h>

int main(void) {
    char c;
    
    c = 'a';

    while (c < 'z') {
        printf("%c, ", c);
        c++;
    }
    printf("z");
}