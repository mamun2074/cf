#include <stdio.h>

int main()
{
    char bonzeCode[201];
    int i;
    scanf("%s", &bonzeCode);

    for (i = 0; bonzeCode[i] != '\0'; i++)
    {
        if (bonzeCode[i] == '-' && bonzeCode[i + 1] == '-')
        {
            printf("2");
            i++;
        }
        else if (bonzeCode[i] == '-' && bonzeCode[i + 1] == '.')
        {
            printf("1");
            i++;
        }
        else if (bonzeCode[i] == '.')
        {
            printf("0");
        }
    }
    return 0;
}