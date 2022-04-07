#include <stdio.h>

int main()
{
    int t, n, c1, c2, temp;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        temp = n / 3;
        if (n % 3 == 0)
        {
            c1 = temp;
            c2 = temp;
        }
        else if (n % 3 == 1)
        {
            c1 = temp + 1;
            c2 = temp;
        }
        else if (n % 3 == 2)
        {
            c1 = temp;
            c2 = temp + 1;
        }
        printf("%d %d\n", c1, c2);
    }

    return 0;
}