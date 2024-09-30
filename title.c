#include <stdio.h>

char* title(char str[])
{
    int i;
    i = 0;
    if (str[0] >= 'a' && str[0] <= 'z')
        str[i] -= 32;
    while (str[i] != 0)
    {
        if (str[i] >= 'a' && str[i] <= 'z' && str[i-1] == 32)
            str[i] -= 32;
        i++;
    }
    return str;
}

int main(void) {
    char str[] = "i'm looking for amanda huggenkis";
    printf("%s\n", title(str));
}