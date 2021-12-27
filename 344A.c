#include <stdio.h>
int main()
{
    int numberOfMagnets, i, groupOfMagnets = 0;
    char plusMinus[3];
    char lastMagnetFieldSimble;
    scanf("%d", &numberOfMagnets);
    for (i = 0; i < numberOfMagnets; i++)
    {
        scanf("%s", &plusMinus);
        if (i == 0) // first step group 1 formed
        {
            groupOfMagnets++;
            lastMagnetFieldSimble = plusMinus[1];
        }
        else
        {
            if (lastMagnetFieldSimble==plusMinus[0]) // previous last magnetic filed current first magnative field equal mians different group 
            {
                groupOfMagnets++;
            }
            lastMagnetFieldSimble = plusMinus[1];
        }
    }
    printf("%d \n", groupOfMagnets);
    return 0;
}