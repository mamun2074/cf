#include <stdio.h>
int main()
{
    int t, n, a[51], b[51],
        smallestANumber,
        smallestBNumber, i,
        tempANumber,
        tempBNumber;
    long long int minNumberOfMove;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        smallestANumber = 1000000001;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (smallestANumber > a[i])
            { // find min number of a
                smallestANumber = a[i];
            }
        }
        smallestBNumber = 1000000001;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
            if (smallestBNumber > b[i])
            { // find min number of b
                smallestBNumber = b[i];
            }
        }
        minNumberOfMove = 0;
        tempANumber = 0;
        tempBNumber = 0;
        for (i = 0; i < n; i++)
        {
            // different a[i] to smalle numbers
            tempANumber = a[i] - smallestANumber;
            tempBNumber = b[i] - smallestBNumber;
            if (a[i] != smallestANumber && b[i] != smallestBNumber)
            { // smallest number not in both ith
                if (tempANumber > tempBNumber)
                { // different bigger mins bigger number is number of move ith
                    minNumberOfMove += tempANumber;
                }
                else if (tempANumber == tempBNumber)
                { // different same mins one of them is number of move ith
                    minNumberOfMove += tempANumber;
                }
                else
                { // different b is number of move
                    minNumberOfMove += tempBNumber;
                }
            }
            else if (a[i] == smallestANumber && b[i] != smallestBNumber)
            { // a ith number equal samaller number and not equal b ith small number 
                // mins different b is number of move of ith
                minNumberOfMove += tempBNumber;
            }
            else if (b[i] == smallestBNumber && a[i] != smallestANumber)
            { // b ith number equal samaller number and not equal a ith small number 
                // mins different a is number of move of ith
                minNumberOfMove += tempANumber;
            }
        }

        printf("%lld\n", minNumberOfMove);
    }
    return 0;
}