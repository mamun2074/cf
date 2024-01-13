/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/13/2024
 * Time         21:12:41
 * @param
 * @return
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        long long int lower = 0, upper = 0, ans = 0;
        cin >> n;
        long long int a[n], b[n], c[n];
        long long int ai = 0, bi = 0, ci = 0;
        for (long long int i = 0; i < n; i++)
        {
            long long int type, x;
            cin >> type >> x;
            if (type == 1)
            {
                a[ai] = x;
                ai++;
            }
            else if (type == 2)
            {
                b[bi] = x;
                bi++;
            }
            else
            {
                c[ci] = x;
                ci++;
            }
        }

        sort(a, a + ai);
        sort(b, b + bi);
        sort(c, c + ci);

        if (a[ai - 1])
        {
            lower = a[ai - 1];
        }

        if (b[0])
        {
            upper = b[0];
        }
        if (ai > 0)
        {
            ans = (upper - lower) + 1;
        }

        for (long long int i = 0; i < ci; i++)
        {
            if (c[i] <= upper && c[i] >= lower)
            {
                ans--;
            }
        }
        if (ans < 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}