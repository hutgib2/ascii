#include <stdio.h>
/*
int is_alpha(char c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    else
        return 0; 
}
*/

// conditions in c evaluate to 1 or 0 by default

int is_alpha(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int is_number(char c) {
    return (c >= '0' && c <= '9');
}

int is_alpha_num(char c) {
    return (is_alpha(c) || is_number(c));
}

int main(void) {
    printf("%d\n", is_alpha('A'));
    printf("%d\n", is_alpha('2'));
    printf("%d\n", is_alpha('b'));
    printf("%d\n", is_alpha('*'));
}