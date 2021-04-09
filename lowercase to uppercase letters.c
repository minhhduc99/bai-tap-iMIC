#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "toi Yeu Imic";
    for (int i = 0; i < (strlen(str) - 1); i++)
    {
        if (str[i] == ' ')
            continue;
        else if ('a' <= str[i] && str[i] <= 'z')
            str[i] += 32;
    }
    printf("New string: %s\n", str);
    return 0;
}
