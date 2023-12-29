/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/16/2023
 * Time         23:26:54
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
        int n, number_of_even = 0, number_of_odd = 0, m;
        scanf("%d", &n);
        for (int i = 0; i < n * 2; i++)
        {
            scanf("%d", &m);
            if (m % 2 == 0)
            {
                number_of_even++;
            }
            else
            {
                number_of_odd++;
            }
        }

        if (number_of_even == number_of_odd)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}