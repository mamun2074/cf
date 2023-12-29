/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see         https://codeforces.com/problemset/problem/509/A , https://www.quora.com/What%E2%80%99s-the-next-number-in-this-sequence-2-6-20-70-252-924-3432-12870-48620-184756-705432
 * @since       01/22/2023
 * Time         09:23:09
 * @param
 * @return
 */
#include <stdio.h>

/**
 * This function return factorial from 1 to 20
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/22/2023
 * Time         11:17:21
 * @param
 * @return
 */
long long nFactorial(long long n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return nFactorial(n - 1) * n;
    }
}
// End

int main()
{

    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1\n");
    }
    else
    {
        printf("%lld", nFactorial((n - 1) * 2) / (nFactorial(n - 1) * nFactorial(n - 1)));
    }
    return 0;
}