#include <stdio.h>
int main()
{
    int i, j, s[4], minNumberOfShoes = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &s[i]);
    }

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (s[i] == s[j]) // she wants different color
            {
                minNumberOfShoes++;
                break;
            }
        }
    }
    printf("%d \n", minNumberOfShoes);
    return 0;
}