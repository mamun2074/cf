#include <stdio.h>
int main()
{
    int numbrOfFriends, heightOfTheFence, i, minPossibleValidWidth = 0;
    scanf("%d%d", &numbrOfFriends, &heightOfTheFence);
    int personsHeight[1001];

    for (i = 0; i < numbrOfFriends; i++)
    {
        scanf("%d", &personsHeight[i]);
    }

    for (i = 0; i < numbrOfFriends; i++)
    {
        if (personsHeight[i] > heightOfTheFence) // height getter than fence height mins widht 2
        {
            minPossibleValidWidth += 2;
        }
        else // less than fench height mins widht 1
        {
            minPossibleValidWidth++;
        }
    }
    printf("%d\n", minPossibleValidWidth);

    return 0;
}