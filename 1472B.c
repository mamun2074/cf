#include <stdio.h>

int main()
{
    int t, n, arrayOfInt, i, numberOfOne, numberOfTwo;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        numberOfOne = 0;
        numberOfTwo = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arrayOfInt);

            if (arrayOfInt == 2) // menas item is 2
            {
                numberOfTwo++;
            }
            else
            {
                numberOfOne++;
            }
        }
        if (numberOfTwo == 0 || numberOfOne == 0)
        {
            if (numberOfOne==0)
            {
                if (numberOfTwo % 2 ==0)
                {
                    printf("YES \n");
                }else{
                    printf("NO \n");
                }
                
            }else{
                if (numberOfOne % 2 ==0)
                {
                    printf("YES \n");
                }else{
                    printf("NO \n");
                }
            }
        }else{
            if (numberOfTwo % 2==0)
            {
                if (numberOfOne % 2==0)
                {
                    printf("YES\n");
                }else{
                    printf("NO\n");
                }
                
            }else{
                if (numberOfOne % 2 ==0)
                {
                    printf("YES\n");
                }else{
                    printf("NO\n");
                }
            }
        }
    }

    return 0;
}