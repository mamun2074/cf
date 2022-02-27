#include <stdio.h>
int main()
{
    long long int n, i, j, t, k, sumEven, sumOdd, flag, temp;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &n);
        static long long int a[200000];
        sumEven = 0, sumOdd = 0;
        j = 0;
        for (i = 2; i <= n; i += 2)
        {
            sumEven += i; //sum even numers from 2 to  (n/2)
            a[j++] = i; // store even numbers from 2 to (n/2) on a array
        }
        k = 1;
        temp = 0;
        flag = 0;
        for (i = 1; i <= sumEven; i += 2)
        {
            if (k < n / 2)
            {
                sumOdd += i; // store even numbers (n/2 -1) on odd
                a[j++] = i;
            }
            else
            {
                temp = sumOdd + i;
                if (temp == sumEven)
                {
                    flag = 1;
                    a[j++] = i;
                    break;
                }
            }
            k++;
        }

        if (flag == 1)
        {
            printf("YES\n");

            for (i = 0; i < n; i++)
            {
                printf("%lld ", a[i]);
            }
            printf("\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}