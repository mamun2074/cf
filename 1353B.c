#include <stdio.h>

/**
 * This function swap item
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/19/2022
 * Time         00:24:41
 * @param       int *a, int *b
 * @return      0
 */
void flip(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// End

/**
 * This function works array on assending order
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/19/2022
 * Time         00:12:51
 * @param       int *a, int n
 * @return      0
 */
void asc(int a[30], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                // flip item
                flip(&a[i], &a[j]);
            }
        }
    }
}
// End

/**
 * This function works for descing order on array
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/19/2022
 * Time         00:13:28
 * @param       int *a, int n
 * @return      0
 */
void desc(int a[30], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                // flip item
                flip(&a[i], &a[j]);
            }
        }
    }
}
// End

int main()
{
    int t, n, k, a[30], b[30], i, j, totalA, totalB, temp;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &k);
        totalA = totalB = 0;
        // insert a
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            totalA += a[i];
        }
        // insert b
        for (i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
            totalB += b[i];
        }
        if (k < 1)
        {
            printf("%d \n", totalA);
        }
        else
        {
            totalA = 0;
            // assending order of a
            asc(a, n);
            // desc order of b
            desc(b, n);
            // swap k times and added array a
            for (i = 0; i < n; i++)
            {
                if (i < k && a[i] < b[i])
                {
                    temp = a[i];
                    a[i] = b[i];
                    b[i] = temp;
                }
                totalA += a[i];
            }
            printf("%d \n", totalA);
        }
    }

    return 0;
}