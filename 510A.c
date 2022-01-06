#include <stdio.h>
int main()
{
    int n, m, label, i, j, flag = 1;
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++)
    {
        label = (i % 2 == 0); // Even and odd check
        for (j = 1; j <= m; j++)
        {
            if (label) // if even
            {
                if (j == m && flag)  //first flag true and last item mins last # update flag into false
                {
                    printf("#");
                    flag = 0;
                    continue;
                }
                else if (j < m && j != m && flag) // first to j<m continue .....
                {
                    printf(".");
                }


                if (j == 1 && flag == 0) // if flag false and j is 0  mins first #
                {
                    printf("#");
                }
                else if (j <= m  && flag == 0) // flag false and after first char remain ....
                {
                    printf(".");
                    if (j==m)// update flag when last item
                    {
                        flag = 1;
                    } 
                }
            }
            else // odd then print only #
            {
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;
}