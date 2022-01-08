#include <stdio.h>
int main()
{
    int i, j, t, n, a[51], flag, temp;
    scanf("%d", &t); // number of test case
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]); // insert all element
        }

        for (i = 0; i < n; i++) // sorting asc elemnet
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        flag = 1;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if ((a[j] - a[i]) <= 1 || a[i] == a[j]) // if true break 
                {
                    break;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
        if (flag)
        {
            printf("YES \n");
        }
        else
        {
            printf("NO \n");
        }
    }
    return 0;
}