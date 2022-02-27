#include <stdio.h>
int main()
{
    int t, n, k, withoutThree[1000], i, j, lastDegit, result;
    scanf("%d", &t);
    j = 0;
    for (i = 1; i <= 1666; i++)
    {
        lastDegit = i % 10;
        if (i % 3 == 0)
        {
            continue;
        }
        else if (lastDegit == 3)
        {
            continue;
        }
        else
        {
            withoutThree[j] = i;
            j++;
        }
    }
    while (t--)
    {
        scanf("%d", &k);
        printf("%d\n", withoutThree[k - 1]);
    }
    return 0;
}