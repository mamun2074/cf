#include <stdio.h>
/**
* This function return true or false. Check prime number
*
* @author      Md. Al-Mahmud <mamun120520@gmail.com>
* @version     1.0
* @see         
* @since       01/15/2022
* Time         01:47:00
* @param       n
* @return      1,0
*/ 
int isPrime(int n) 
{
    int flag = 1, i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    int n, i = 3, x, y, flag = 1;
    scanf("%d", &n);
    while (flag)
    {
        x = n - i; // first less three
        y = i;
        if (isPrime(x) == 0 && isPrime(y) == 0) // both are not prime print x y
        {
            printf("%d %d", x, y);
            break;
        }
        i++;
    }

    return 0;
}