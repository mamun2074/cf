#include <stdio.h>
int main()
{
    int a, b, differentSocks = 0, sameSocks = 0, temp;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        temp = a - b;
        differentSocks = b;
        sameSocks = temp / 2;
    }
    else if (b > a)
    {
        temp = b - a;
        differentSocks = a;
        sameSocks = temp / 2;
    }
    else if (a == b)
    {
        differentSocks = a;
    }

    printf("%d %d", differentSocks, sameSocks);
    return 0;
}