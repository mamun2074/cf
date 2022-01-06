#include <stdio.h>
int main()
{
    int n, numberOfMinimumBil = 0, remain = 0, flag = 1;
    scanf("%d", &n);

    if (n % 100 == 0 || n >= 100) // 100 or getter
    {
        numberOfMinimumBil += n / 100;
        remain = n % 100;
        flag = 0;  // flag 0 mins remain unchanged 
    }
    if (flag)
    {
        remain = n; // update remain into n
    }

    if (remain % 20 == 0 || remain >= 20)
    {
        numberOfMinimumBil += remain / 20;
        remain = remain % 20;
        flag = 0;
    }
    if (flag)
    {
        remain = n;
    }

    if (remain % 10 == 0 || remain >= 10)
    {
        numberOfMinimumBil += remain / 10;
        remain = remain % 10;
        flag = 0;
    }

    if (flag)
    {
        remain = n;
    }

    if (remain % 5 == 0 || remain >= 5)
    {
        numberOfMinimumBil += remain / 5;
        remain = remain % 5;
        flag = 0;
    }

    if (flag)
    {
        remain = n;
    }
    if (remain % 1 == 0 || remain >= 1)
    {
        numberOfMinimumBil += remain / 1;
        remain = remain % 1;
        flag = 0;
    }
    printf("%d \n", numberOfMinimumBil);

    return 0;
}