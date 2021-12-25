#include <stdio.h>
int main()
{
    int ageOfLimark, ageOfBob, numberOfYears = 0;
    scanf("%d%d", &ageOfLimark, &ageOfBob);
    while (ageOfLimark <= ageOfBob)
    {
        ageOfLimark = ageOfLimark * 3;
        ageOfBob = ageOfBob * 2;
        numberOfYears++;
    }
    printf("%d\n", numberOfYears);
    return 0;
}