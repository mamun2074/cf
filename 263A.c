#include <stdio.h>

int main()
{

    int i, j, minNumberOfMoves = 0, row, colomn;
    int ith[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &ith[i][j]);
            if (ith[i][j] == 1)
            {
                row = i;
                colomn = j;
            }
        }
    }

    if (row < 2) // row is lower part and need to increse
    {
        while (row < 2)
        {
            minNumberOfMoves++;
            row++;
        }
    }
    else if (row > 2) // row is upper part and  need to reduce
    {
        while (row > 2)
        {
            minNumberOfMoves++;
            row--;
        }
    }

    if (colomn < 2) // colomn is lower part and need to increse
    {
        while (colomn < 2)
        {
            minNumberOfMoves++;
            colomn++;
        }
    }
    else if (colomn > 2) // colomn is higher part and need to reduce
    {
        while (colomn > 2)
        {
            minNumberOfMoves++;
            colomn--;
        }
    }

    printf("%d \n", minNumberOfMoves);

    return 0;
}