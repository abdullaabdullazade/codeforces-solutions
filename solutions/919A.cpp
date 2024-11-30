#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<double> v;

    while (n--)
    {
        double a, s;
        cin >> a >> s;
        v.push_back(a / s);
    }

    cout << setprecision(8) << *min_element(v.begin(), v.end()) * m;

    /*

    no ext, no next, mirrehim is the best

    I am on school




     */
}
signed main()
{
    solve();
}

/*

Mektebde yaziram hahaha
 */