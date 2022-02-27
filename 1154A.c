#include <stdio.h>
int main()
{
    int x[4], i, j, temp, a, b, c;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &x[i]);
    }
    // sort desc
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (x[i] < x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    // a+b+c, a+b, a+c, a+z  thant mins height 
    //number is equal to a+b+c, a=(a+b+c)-(b+c) 
    //other are same
    a = x[0] - x[1];
    b = x[0] - x[2];
    c = x[0] - x[3];
    printf("%d %d %d \n", a, b, c);
    return 0;
}