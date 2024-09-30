#include <stdio.h>

char* to_upper(char str[])
{
    int i;
    
    i = 0;
    while (str[i]!=0)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return str;
}

int main(void) 
{
    char str[] = "Mike Smith Rotch";
    
    printf("%s\n", to_upper(str));
}

