/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       12/30/2023
 * Time         20:34:21
 * @param
 * @return
 */

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (a != 0)
    {
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}

int main()
{

    // a=1, b=5
    // gcd g= 1
    // a= a/g = 1/1 = 1
    // b = b/g = 5/1= 5
    // a== 1 = g*b*b= 1*5*5= 25
    // else g*a*b = 1*5*5= 25

    /**
     *  a= 2, b=3
     * gcd = 1
     *  a= 2/1= 2
     *  b= 3/1= 3
     *  ans= 1*2*3= 6
     *
     */

    int t, a, b, x;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int d = gcd(a, b);
        a /= d;
        b /= d;
        int result = (a == 1) ? d * b * b : d * a * b;
        cout << result << endl;
    }
    return 0;
}
