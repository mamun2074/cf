/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/16/2023
 * Time         21:30:09
 * @param
 * @return
 */
#include <stdio.h>
int main()
{
    int t, n, m;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &m);
        if ((n * m) % 2 == 0)
        {
            printf("%d\n", (n * m) / 2);
        }
        else
        {
            printf("%d\n", ((n * m) / 2) + 1);
        }
    }
    return 0;
}