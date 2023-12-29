/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       12/29/2023
 * Time         11:45:25
 * @param
 * @return
 */
#include <stdio.h>
int main()
{

    int n, t;
    char temp;
    scanf("%d%d", &n, &t);
    char s[n + 1];
    scanf("%s", s);
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                temp = s[j + 1];
                s[j + 1] = s[j];
                s[j] = temp;
                j++;
            }
        }
    }
    printf("%s", s);

    return 0;
}