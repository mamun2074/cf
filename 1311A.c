/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * Time         05:26:36
 * url          https://codeforces.com/problemset/problem/1311/A
 *
 */
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, result;
        scanf("%d%d", &a, &b);
        if (a == b)
        {
            result = 0;
        }
        else if (a < b)
        {
            if ((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0))
            {
                result = 2;
            }
            else
            {
                result = 1;
            }
        }
        else
        {
            if ((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0))
            {
                result = 1;
            }
            else
            {
                result = 2;
            }
        }
        printf("%d\n", result);
    }

    return 0;
}