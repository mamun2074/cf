/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see         https://codeforces.com/problemset/problem/1520/B
 * @since       12/03/2022
 * Time         22:09:11
 * @param
 * @return
 */
#include <stdio.h>
int digit_count(int n)
{
    int no_of_digit = 0;
    do
    {
        n /= 10;
        no_of_digit++;
    } while (n != 0);
    return no_of_digit;
}
int number_from_digit_only_one(int p)
{
    int number = 0;
    for (int i = 0; i < p; i++)
    {
        number = number * 10 + 1;
    }
    return number;
}
int main()
{
    int tt;
    scanf("%d", &tt);
    while (tt--)
    {
        int n, no_of_digit = 0, total_ordinary = 0, digit;
        scanf("%d", &n);
        if (n < 10)
        {
            printf("%d\n", n);
        }
        else
        {
            no_of_digit = digit_count(n);
            total_ordinary = (no_of_digit - 1) * 9;
            digit = number_from_digit_only_one(no_of_digit);
            int i = 1;
            while (digit * i <= n)
            {
                total_ordinary++;
                i++;
            }
            printf("%d\n", total_ordinary);
        }
    }
    return 0;
}