#include <stdio.h>
int main()
{
    int n, t, res;
    scanf("%d", &t); // number of test case
    while (t--)
    {
        scanf("%d", &n); // candies
        res = 0;
        if (n % 2 == 0 && n > 2) // getter than 2 and even number
        {
            res = (n / 2) - 1; // n divided by 2 -1  fullfill all condition a>0, b>0, a>b, integer a+b=n
        }
        else if (n > 2)
        {
            res = n / 2; //For odd number fullfill all condition a>0, b>0, a>b, integer a+b=n
        }
        printf("%d\n", res); 
    }

    return 0;
}