#include <stdio.h>
int main()
{
    int t, x, y, n, k, i;
    scanf("%d", &t);
    while (t--)
    {
        k = 0;
        scanf("%d%d%d", &x, &y, &n);
        if (x <= n) // x equal or getter than n mins k<=n
        {
            for (i = n; i >= x && x != y; i--)
            {
                if (i % x == y) // rule
                {
                    k = i;
                    break;
                }
            }
        }
        printf("%d\n", k);
    }

    return 0;
}