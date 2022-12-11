#include <bits/stdc++.h>
using namespace std;

int n, w, i;

int main()
{
    cin >> n;
    while (w <= n)
    {
        i++;
        n = n - w;
        w = w + i;
    }
    cout << i - 1;
}