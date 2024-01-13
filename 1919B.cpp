/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/06/2024
 * Time         21:55:21
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
        int n;
        cin >> n;
        char temp;
        if (n == 1)
        {
            cin >> temp;
            cout << 1 << endl;
        }
        else
        {
            int result = 0;
            int plus = 0, minus = 0;
            for (int i = 0; i < n; i++)
            {
                cin >> temp;
                if (temp == '+')
                {
                    plus++;
                }
                else
                {
                    minus++;
                }
            }
            result = (plus - minus) < 1 ? (minus - plus) : (plus - minus);
            cout << result << endl;
        }
    }

    return 0;
}