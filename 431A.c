#include <stdio.h>

int main()
{
    int strips[5], i, totalCal = 0;
    char s[100001];
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &strips[i]);
    }
    scanf("%s", &s);

    for (i = 0; s[i] != '\0'; i++)
    {
        // '1'-'0' = 1
        totalCal += strips[(s[i] - '0') - 1];
    }

    printf("%d\n", totalCal);

    return 0;
}