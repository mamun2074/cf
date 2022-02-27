#include <stdio.h>
int main()
{
    int n, k, y, i, j, numberOfParticipantCanParticipate = 0;
    scanf("%d%d", &n, &k);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &y);
        y += k; // K times
        if (y <= 5) // not getter thant 5 times participant can perticipate 
        {
            numberOfParticipantCanParticipate++;
        }
    }
    printf("%d", numberOfParticipantCanParticipate / 3);

    return 0;
}