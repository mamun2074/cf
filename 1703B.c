/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/22/2023
 * Time         12:22:07
 * @param
 * @return
 */
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int flag[26];
        for (int i = 0; i < 26; i++)
        {
            flag[i] = 0;
        }
        char solvedProblems[51];
        int n, result = 0;
        scanf("%d", &n);
        scanf("%s", &solvedProblems);
        for (int i = 0; i < n; i++)
        {
            if (flag[solvedProblems[i] - 'A'] == 0)
            {
                result = result + 2;
                flag[solvedProblems[i] - 'A'] = 1;
            }
            else
            {
                result++;
            }
        }
        printf("%d\n", result);
    }

    return 0;
}