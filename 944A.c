#include <stdio.h>

int main()
{
    int n, k, result = 0;
    scanf("%d%d", &n, &k);
    while (k--)
    {
        if (n % 10 == 0) // Means number last degit is zero
        {
            n= n / 10; // zero divided by 10 means remove last zero
        }else{
            n--;
        }
    }
    printf("%d \n", n);

    return 0;
}