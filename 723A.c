#include <stdio.h>
int main()
{
    int x[4], temp, i, j;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &x[i]);
    }
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (x[i] < x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    printf("%d", x[0] - x[1] + x[1] - x[2]);

    return 0;
}