/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       12/29/2023
 * Time         23:24:08
 * @param
 * @return
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, d, h = 0;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; i++)
    {
        if (i % k && i % l && i % m && i % n)
        {
            h++;
        }
    }

    cout << d - h << endl;

    return 0;
}