#include <stdio.h>
int main()
{
    int n, t[5001], i, j, k, teams = 0, ans[2000], x, y, z, flag, index = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }

    for (i = 0; i < n; i++)
    {
        flag = 0;
        if (t[i] == -1) // if get -1 not go through
        {
            continue;
        }
        x = t[i]; // store data on x
        for (j = i + 1; j < n; j++)
        {
            flag = 0;
            if (t[j] == -1 || x == t[j]) // if get -1 or same value of x not go through
            {
                continue;
            }
            y = t[j]; // store data on y
            for (k = j + 1; k < n; k++)
            {
                flag = 0;
                if (t[k] == -1 || y == t[k] || x == t[k]) // if get -1 or same value of x and y not go through
                {
                    continue;
                }
                z = t[k]; // store data on z
                flag = 1; // if got change flag
                break;
            }
            break;
        }
        if (flag)
        {
            t[i] = -1;            // if got change into -1
            t[j] = -1;            // if got change into -1
            t[k] = -1;            // if got change into -1
            teams++;              // team increment
            ans[index++] = i + 1; // store index from 1
            ans[index++] = j + 1; // store index from 1
            ans[index++] = k + 1; // store index from 1
        }
    }

    if (teams == 0)
    {
        printf("%d \n", teams);
    }
    else
    {
        printf("%d \n", teams);
        for (i = 0; i < teams * 3; i++)
        {
            if (i % 3 == 0 && i != 0)
            {
                printf("\n");
            }
            printf("%d ", ans[i]);
        }
    }

    return 0;
}