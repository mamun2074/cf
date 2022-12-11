/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see         https://codeforces.com/contest/1760/problem/A
 * @since       12/02/2022
 * Time         01:09:45
 * @param
 * @return
 */

#include <stdio.h>

/**
* This function return max of two integer
*
* @author      Md. Al-Mahmud <mamun120520@gmail.com>
* @version     1.0
* @see         
* @since       12/02/2022
* Time         01:31:28
* @param       int x, int y
* @return      int
*/
int max(int x, int y)
{
    if (x < y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
/**
* This function return min number of two integer
*
* @author      Md. Al-Mahmud <mamun120520@gmail.com>
* @version     1.0
* @see         
* @since       12/02/2022
* Time         01:32:03
* @param       int x, int y
* @return      int
*/

int min(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, max_number, min_number, ans;
        scanf("%d%d%d", &a, &b, &c);
        max_number = max(max(a, b), c);
        min_number = min(min(a, b), c);
        if (max_number > a && a > min_number)
        {
            ans = a;
        }

        if (max_number > b && b > min_number)
        {
            ans = b;
        }

        if (max_number > c && c > min_number)
        {
            ans = c;
        }
        printf("%d\n", ans);
    }

    return 0;
}