#include <stdio.h>

int main()
{
    int n, x = 0;
    char statement[4];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", &statement);
        x += 44 - statement[1];
    }
    printf("%d \n", x);

    return 0;
}