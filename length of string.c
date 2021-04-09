#include <stdio.h>

int length(char[]);

int main()
{
    char str[100];
    printf("Enter string: ");
    scanf("%[^\n]", str);
    printf("Length of string %s is: %d\n", length(str));
    return 0;
}

int length(char str[])
{
    int count = 0;
    while (1)
    {
        if (str[i] != '\0')
            count++;
        else
            break;
    }
    return count;
}
