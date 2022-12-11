/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * Time         23:47:51
 * url          https://codeforces.com/problemset/problem/1619/A
 *
 */
#include <stdio.h>
#include <string.h>

/**
 * This function retrun 1,0 if match string or not
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       11/27/2022
 * Time         01:09:07
 * @param
 * @return
 */
int matchString(char str[], int length)
{
    int i = 0, halfLength, isMatch = 1;
    halfLength = length / 2;

    for (i = 0; i < halfLength; i++)
    {
        if (str[i] != str[halfLength + i])
        {
            isMatch = 0;
            break;
        }
    }
    if (isMatch)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// End

int main()
{
    int t, length;
    char str[101];
    scanf("%d", &t);
    while (t--)
    {
        int halfLength;
        scanf("%s", str);
        length = strlen(str);
        if (length % 2 == 0)
        {
            if (matchString(str, length))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}