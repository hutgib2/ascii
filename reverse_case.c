#include <stdio.h>

char* reverse_case(char str[])
{
    int i;
    
    i = 0;
    while (str[i]!=0)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return str;
}

int main(void) 
{
    char str[] = "Mike Hugo";

    printf("%s\n", reverse_case(str));
}
