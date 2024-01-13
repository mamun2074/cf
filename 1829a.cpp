/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/06/2024
 * Time         15:23:48
 * @param
 * @return
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string code;
    code = "codeforces";
    cin >> t;
    while (t--)
    {
        int differs = 0;
        char s[11];
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != code[i])
            {
                differs++;
            }
        }
        cout << differs << endl;
    }
    return 0;
}