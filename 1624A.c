#include <stdio.h>

int main()
{
    int t, n, arrayOfInteger, min, max, i;
    scanf("%d", &t);
    while (t--)
    {
        min = 1000000000;
        max = -1;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arrayOfInteger);
            // find min
            if (min >= arrayOfInteger)
            {
                min = arrayOfInteger;
            }
            // find max
            if (max < arrayOfInteger)
            {
                max = arrayOfInteger;
            }
        }

        printf("%d\n", max-min);
    }

    return 0;
}