#include <stdio.h>
int main()
{
    int n, crimeOccoredAndOfficers[100001], numberOfOfficerRecruited = 0, untreated = 0, i, lastIndexOfOccored;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &crimeOccoredAndOfficers[i]);
        if (crimeOccoredAndOfficers[i] == -1)
        {
            lastIndexOfOccored = i; // store last -1 index
        }
    }
    for (i = 0; i <= lastIndexOfOccored; i++) // loop through last -1
    {
        if (crimeOccoredAndOfficers[i] > 0) // getter than 0 mins increse requirts
        {
            numberOfOfficerRecruited += crimeOccoredAndOfficers[i];
        }
        else
        {
            untreated++; // increse untreated
            if (numberOfOfficerRecruited > 0) // recruited getter than 0 mins untreated and recruited decrease
            {
                untreated--;
                numberOfOfficerRecruited--;
            }
        }
    }
    printf("%d \n", untreated);
    return 0;
}