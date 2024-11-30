#include <bits/stdc++.h>

using namespace std;

#define all v.begin() v.end()

#define $fr13nd_7$                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int long long

#define pi pair<int, int>

void solve()
{
    int a, b;
    cin >> a >> b;
    vector<int> v(a);

    for (auto &i : v)
        cin >> i;

    int l = 0, r = a - 1, res = 0;
    while (l <= r)
    {
        if (v[l] <= b)
        {
            res++;
            l++;
        }
        else if (v[r] <= b)
        {
            res++;
            r--;
        }
        else
        {

            break;
        }
    }
    cout << res << endl;
}

signed main()
{
    $fr13nd_7$ int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}


/*

Mektebde hell edirem xexexe
*/