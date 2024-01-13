/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/06/2024
 * Time         21:26:45
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
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "Bob" << endl;
        }
        else
        {
            int ans = (a - b) < 1 ? (b - a) : (a - b);
            if (ans % 2 == 0)
            {

                cout << "Bob" << endl;
            }
            else
            {
                cout << "Alice" << endl;
            }
        }
    }

    return 0;
}