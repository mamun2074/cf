#include <stdio.h>
int main()
{
    int t, n, a[101], i, j, isSingle;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // check first item unique or not
        isSingle = 1;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    isSingle = 0;
                    break;
                }
            }
            break;
        }

        // first item unique 
        if (isSingle)
        {
            printf("1\n");
        }
        else
        { // find not first item
            for (i = 1; i < n; i++)
            {
                if (a[i] != a[0])
                {
                    break;
                }
            }
            printf("%d\n", i + 1);
        }
    }

    return 0;
}