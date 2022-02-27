#include <stdio.h>
int main()
{
    int n, miska, chris, resultM = 0, resultC=0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d", &miska, &chris);
        if (miska > chris)
        {
            resultM++;
        }
        else if (chris > miska)
        {
            resultC++;
        }
    }

    if (resultM > resultC)
    {
        printf("Mishka\n");
    }
    else if (resultC > resultM)
    {
        printf("Chris\n");
    }
    else
    {
        printf("Friendship is magic!^^\n");
    }

    return 0;
}