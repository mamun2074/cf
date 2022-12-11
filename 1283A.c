/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * Time         23:18:59
 * url          https://codeforces.com/problemset/problem/1283/A
 *
 */
#include <stdio.h>
int main()
{
    int day = 1440, t, hh, min;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &hh, &min);
        printf("%d\n", day - (hh * 60) - min);
    }

    return 0;
}