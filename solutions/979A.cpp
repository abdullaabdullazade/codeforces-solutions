#include <bits/stdc++.h>

using namespace std;

#define all v.begin() v.end()
#define int long long

void solve()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
    }
    else if ((n + 1) % 2 == 0)
    {
        cout << (n + 1) / 2 << endl;
    }
    else
    {
        cout << n + 1 << endl;
    }
}

/*

Pizza






 */
signed main()
{
    solve();
}

/*

Mektebde yaziram hahaha
 */