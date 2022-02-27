#include <stdio.h>

int main()
{
    int t, i, miniumNumberOfSummands, n, divided, element[6], digit, remain;
    scanf("%d", &t);
    
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < 6; i++) // initially elements are 0
        {
            element[i] = 0;
        }
        miniumNumberOfSummands = 0; // initially miniumNumberOfSummands assaign 0
        divided = 10000;            // initailly divided assaign 10000
        do
        {
            if (n / divided != 0) 
            {
                // n=100, divided=100, 1*100=100 get current digit
                digit = (n / divided) * divided; 
                remain = n % divided; // remain number becomes n
                // store element miniNumSumm index
                element[miniumNumberOfSummands++] = digit; 
                n = remain;
                // remove last digit of divided
                divided /= 10;
            }
            else
            {
                // remove last digit of divided
                divided /= 10;
            }

        } while (divided != 0); // unitll divided 0
        printf("%d \n", miniumNumberOfSummands);
        for (i = 0; i < miniumNumberOfSummands; i++)
        {
            printf("%d ", element[i]);
        }
        printf("\n");
    }

    return 0;
}