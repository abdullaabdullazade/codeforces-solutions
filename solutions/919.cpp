#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    int i = 0;
    int current_num = 0;
    int z = 1;
    while (i < n)
    {
        int t = z;
        int p = 0;
        while (t > 0)
        {
            p += t % 10;
            t /= 10;
        }
        if (p == 10)
        {
            current_num = z;
            i++;
        }
        z += 1;
    }
    cout << current_num << endl;
}

/*

No ext, no next, mirrehim is the best

I am on school




 */
signed main()
{
    solve();
}

/*


 */