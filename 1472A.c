/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * Time         22:53:40
 * url          https://codeforces.com/problemset/problem/1472/A
 *
 */
#include <stdio.h>
int t;
int picesOfsheets(int w, int h)
{
    int total = 0;
    while (w % 2 == 0)
    {
        total += 2;
        w /= 2;
    }
    while (h % 2 == 0)
    {
        total += 2;
        h /= 2;
    }
    return total;
}
int main()
{
    scanf("%d", &t);
    while (t--)
    {
        int w, h, n;
        scanf("%d%d%d", &w, &h, &n);
        if (n == 1)
        {
            printf("YES\n");
        }
        else
        {
            if (w % 2 != 0 && h % 2 != 0)
            {
                printf("NO\n");
            }
            else if (picesOfsheets(w, h) >= n)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
            printf(" %d \n", picesOfsheets(w, h));
        }
    }

    return 0;
}