#include <stdio.h>
int main()
{
    int t, a, b, numberOfminMove, different;
    scanf("%d", &t);
    while (t--)
    {
        numberOfminMove = 0; // initially number of move 0;
        different = 0;       // initally different 0;
        scanf("%d%d", &a, &b);
        // if (a < b) // b getter than a find the different
        // {
        //     different = b - a;
        // }
        // else if (a > b) // a getter than b find the different
        // {
        //     different = a - b;
        // }

        different = ((a - b) <= 0) ? (b - a) : (a - b); // short form of avobe
        if (different > 0) // getter than zero mins different something
        {
            if (different > 10)
            {
                if (different % 10 == 0)
                {
                    numberOfminMove = different / 10;
                }
                else
                {
                    numberOfminMove = (different / 10) + 1;
                }
            }
            else
            {
                numberOfminMove = 1;
            }
        }
        printf("%d \n", numberOfminMove);
    }

    return 0;
}