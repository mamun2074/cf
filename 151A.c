#include <stdio.h>
int main()
{
    int n, k, l, c, d, p, nl, np, i;
    long long int toasts[4], result = 2000000;
    scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);
    toasts[0] = (k * l) / nl;
    toasts[1] = c * d;
    toasts[2] = p / np;
    for (i = 0; i < 3; i++)
    {
        if (toasts[i] < result)
        {
            result = toasts[i];
        }
    }
    printf("%lld\n", result/n);

    return 0;
}