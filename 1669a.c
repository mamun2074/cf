/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * Time         22:19:18
 * url         https://codeforces.com/problemset/problem/1669/A
 *
 */
#include <stdio.h>
int main()
{
    int t, rating;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &rating);
        int positon;
        if (rating <= 1399)
        {
            positon = 4;
        }
        else if ((1400 <= rating) && (rating <= 1599))
        {
            positon = 3;
        }
        else if ((1600 <= rating) && (rating <= 1899))
        {
            positon = 2;
        }
        else if (1900 <= rating)
        {
            positon = 1;
        }
        printf("Division %d\n", positon);
    }

    return 0;
}