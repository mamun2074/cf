#include <stdio.h>

int main()
{
    int n, departPagganger, enterPassanger, minNumOfCapacityOfTarm, i, currentPassanger;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &departPagganger, &enterPassanger);
        if (i == 0) // current passanger and minNumber of capacity ara same
        {
            currentPassanger = minNumOfCapacityOfTarm = enterPassanger;
        }
        else
        { // current passanger equer to current subtract depart and add enter passanger
            currentPassanger = (currentPassanger - departPagganger) + enterPassanger;
            if (currentPassanger > minNumOfCapacityOfTarm) 
            { // update if current passanger bigger than minNumber of passsanger
                minNumOfCapacityOfTarm = currentPassanger;
            }
        }
    }
    printf("%d \n", minNumOfCapacityOfTarm);

    return 0;
}