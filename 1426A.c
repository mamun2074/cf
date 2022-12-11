/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * Time         00:23:10
 * url          https://codeforces.com/problemset/problem/1426/A
 *
 */
#include <stdio.h>
int main()
{
    int n, x, result;
    scanf("%d%d", &n, &x);
    result = (2 + (n - 3) / x);
    printf("%d", result);

    return 0;
}