#include <stdio.h>
int main()
{
    int t, n, a[1001], i, j, numberOfMinMove, isBalance, flag, temp;
    scanf("%d", &t);
    while (t--)
    {
        isBalance = 0; // even odd balance
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] % 2 == 0)
            { // Even ++
                isBalance++;
            }
            else
            { // odd --
                isBalance--;
            }
        }

        if ((n == 1 && a[0] % 2 == 1) || (isBalance != 1 && n % 2 == 1) || (isBalance != 0 && n % 2 == 0))
        { // unbalance and 1st element odd
            printf("-1\n");
        }
        else
        {
            numberOfMinMove = 0;
            for (i = 0; i < n; i++)
            {
                if (a[i] % 2 == i % 2)
                { // i th mod equal
                    continue;
                }
                for (j = i + 1; j < n; j++)
                {
                    if (a[j] % 2 == j % 2)
                    { // i th mod equal mins continue
                        continue;
                    }

                    if (a[i] % 2 != a[j] % 2)
                    { // value i mod 2  not same value j mod 2 mins need to swap
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                        numberOfMinMove++;
                        break;
                    }
                }
            }
            printf("%d \n", numberOfMinMove);
        }
    }
    return 0;
}