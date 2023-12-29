/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see         https://codeforces.com/problemset/problem/1498/A
 * @since       12/11/2022
 * Time         21:06:30
 * @param
 * @return
 */

/**
 * This function return gcd
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       12/11/2022
 * Time         21:13:54
 * @param
 * @return
 */
long long custome_gcd(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return custome_gcd(b, a % b);
    }
}
// End

/**
 * This function return summation of number of digit. 121 >> 1+2+1=4
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       12/11/2022
 * Time         22:18:43
 * @param
 * @return
 */
long long sum_of_digit(long long temp)
{
    long long sum = 0;
    while (temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    return sum;
}
// End
#include <stdio.h>
int main()
{
    int tt;
    scanf("%d", &tt);
    while (tt--)
    {
        long long n;
        long long sum = 0;
        scanf("%lld", &n);
        if (custome_gcd(n, sum_of_digit(n)) > 1)
        {
            printf("%lld\n", n);
        }
        else
        {
            while (n++)
            {
                if (custome_gcd(n, sum_of_digit(n)) > 1)
                {
                    printf("%lld\n", n);
                    break;
                }
            }
        }
    }
    return 0;
}