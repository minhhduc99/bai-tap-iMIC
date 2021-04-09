#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char substr[50];
    int count = 0, j = 0;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    getchar();
    printf("Enter substring: ");
    scanf("%[^\n]", substr);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == substr[j])
            j++;
        else
            j = 0;
        if (j == strlen(substr))
        {
            count++;
            j = 0;
        }
    }
    printf("Number of substring |%s| in string |%s| is: %d\n", str, substr, count);
    return 0;
}
