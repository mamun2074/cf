#include <stdio.h>

int main()
{
    int n, petya, vasya, tonya, numberOfProblems;

    scanf("%d", &n);
    numberOfProblems = 0;
    while (n--)
    {
        scanf("%d%d%d", &petya, &vasya, &tonya);
        if ((petya == 1 && vasya == 1) || (petya == 1 && tonya == 1) || (vasya == 1 && tonya == 1))
        {
            numberOfProblems++;
        }
    }
    printf("%d \n", numberOfProblems);

    return 0;
}