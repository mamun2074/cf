#include <stdio.h>
int main()
{
    int t, n, totalDigit, lastNumber, result;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        totalDigit = 0;
        lastNumber = n % 10; // Find the last lastNumber (All lastNumber ara same)
        result = 0;
        while (n != 0)
        {
            n = n / 10;
            totalDigit++; // total number of lastNumber
        }
        // 10 * (lastNumber - 1) every line total number 10
        // n(n+1)/2= 1+2+...n
        result = (10 * (lastNumber - 1)) + (totalDigit * (totalDigit + 1)) / 2;
        printf("%d\n", result);
    }

    return 0;
}