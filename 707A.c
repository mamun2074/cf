#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, m, i, j;
    char color;
    bool blackAndWhite = true;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf(" %c", &color);
            if (color == 'C' || color == 'M' || color == 'Y')
            {
                blackAndWhite = false;
            }
        }
    }
    if (blackAndWhite)
    {
        printf("#Black&White");
    }
    else
    {
        printf("#Color");
    }

    return 0;
}