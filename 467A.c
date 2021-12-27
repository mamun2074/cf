#include <stdio.h>
int main()
{
    int numberOfRooms, alreadyLiveIn, roomCapacities, i, bothCanMoveIn = 0;
    scanf("%d", &numberOfRooms);
    while (numberOfRooms--)
    {
        scanf("%d%d", &alreadyLiveIn, &roomCapacities);
        if ((roomCapacities - alreadyLiveIn) > 1) // because both friends want to live same room
        {
            bothCanMoveIn++;
        }
    }
    printf("%d\n", bothCanMoveIn);

    return 0;
}