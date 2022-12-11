/**
*
* @author      Md. Al-Mahmud <mamun120520@gmail.com>
* @version     1.0
* @see         https://codeforces.com/problemset/problem/1294/A
* @since       12/02/2022
* Time         00:27:27
* @param       
* @return      
*/
int max_number(int a, int b, int c)
{
    int max;
    if (a < b)
    {
        max = b;
    }
    else if (a == b)
    {
        max = b;
    }
    else
    {
        max = a;
    }

    if (max < c)
    {
        max = c;
    }
    else if (max == c)
    {
        max = c;
    }
    return max;
}

#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, n;
        scanf("%d%d%d%d", &a, &b, &c, &n);

        if ((a + b + c + n) % 3 == 0 && max_number(a, b, c) <= ((a + b + c + n) / 3))
        {
            printf("YES\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}