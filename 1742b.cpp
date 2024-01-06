/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/05/2024
 * Time         14:42:28
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
        int n, ai;
        cin >> n;
        set<int> a;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            a.insert(ai);
        }
        if (a.size() == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}