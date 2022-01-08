#include <stdio.h>
int main()
{
    int n, point, numberOfAmazing = 0, i, prevPoint = 0, height = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &point);
        if (i == 0)
        {
            prevPoint = point; // in the first point is  assaing to prevPoint
            height = point;
        }
        else
        {
            if (prevPoint < point && height < point) // if getter that prevPoint and height point to current point
            {
                numberOfAmazing++; // amazing is incresing
                height = point;    // if getter that previous height is assaing point
            }
            prevPoint = point;
        }
    }
    if (1 < n)
    {
        numberOfAmazing++;
    }
    printf("%d \n", numberOfAmazing);
    return 0;
}