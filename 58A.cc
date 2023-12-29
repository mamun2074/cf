/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       12/29/2023
 * Time         16:27:04
 * @param
 * @return
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, match = "hello";
    int index = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == match[index])
        {
            index++;
        }
    }
    if (index == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}