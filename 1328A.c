#include <stdio.h>
int main()
{
    int t, a, b, divided, nextDivisibleNumber;
    scanf("%d", &t);
    while (t--) // stop t untill t=0
    {
        scanf("%d %d", &a, &b);
        if (a % b == 0)
        {
            printf("0 \n");
        }
        else
        {
            divided = (a / b); // get divided number
            nextDivisibleNumber = (divided + 1) * b; //next divisible number = divided number + 1 * b;
            printf("%d \n", nextDivisibleNumber - a); // next divisiable number subtract a mins number of move
        }
    }
    return 0;
}