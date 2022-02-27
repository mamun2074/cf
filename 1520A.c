#include <stdio.h>
int main()
{
    int t, n, i, j, result;
    char task[51];
    scanf("%d", &t);
    while (t--)
    {
        int flag[26] = {0}; // initally all zero
        scanf("%d", &n);
        scanf("%s", &task); // scan all string
        for (i = 0; task[i] != '\0'; i++)
        {
            if (task[i] == task[i + 1] && task[i + 1] != '\0')
            { // repeted item continue
                continue;
            }
            // how many time one letter repet
            flag[task[i] - 65]++;
        }
        result = 1;
        for (i = 0; i < 26; i++)
        {
            if (flag[i] > 1)
            { // repet getter than 1 mins same task again start
                result = 0;
                break;
            }
        }

        if (result)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}