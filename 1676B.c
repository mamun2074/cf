/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/18/2023
 * Time         22:23:09
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
        int n, min_value = 100000000, min_total_number = 0;
        int a[50];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (min_value > a[i])
            {
                min_value = a[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            min_total_number += a[i] - min_value;
        }
        printf("%d\n", min_total_number);
    }

    return 0;
}