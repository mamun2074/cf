/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * Time         00:29:08
 * url          https://codeforces.com/problemset/problem/492/A
 *
 */
#include <stdio.h>
int x,y;
int main() 
{
    int n, ans, tetrahedral, temp;
    int dividedAns;
    scanf("%d", &n);
    if (n < 4)
    {
        ans = 1;
    }
    else
    {
        temp = dividedAns = (n / 2);
        while (temp--)
        {
            tetrahedral = ((dividedAns) * (dividedAns + 1) * (dividedAns + 2) / 6);
            ans = dividedAns;
            if (n == tetrahedral)
            {
                ans = dividedAns;
                break;
            }
            else if (n < tetrahedral)
            {
                dividedAns--;
            }
            else
            {
                break;
            }
        }
    }
    printf("%d", ans);

    return 0;
}