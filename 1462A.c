/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/18/2023
 * Time         23:39:12
 * @param
 * @return
 */
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, b[300];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }

        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            printf("%d %d ", b[i], b[j]);
            i++;
            j--;
        }
        if (n % 2 != 0)
        {
            printf("%d", b[i]);
        }
        printf("\n");
    }
    return 0;
}