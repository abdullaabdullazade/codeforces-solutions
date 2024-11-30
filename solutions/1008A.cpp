#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    string n;
    cin >> n;
    vector<char> vovels = {'a', 'o', 'u', 'i', 'e'};
    if (n.size() == 1 and n[0] != 'n' and !count(vovels.begin(), vovels.end(), n[0]))
    {
        cout << "NO";
        return;
    }

    bool check = false;
    for (auto &i : n)
    {
        if (check)
        {
            if (count(vovels.begin(), vovels.end(), i))
            {
                check = false;
            }
            else
            {
                cout << "NO";
                return;
            }
        }

        else if (!count(vovels.begin(), vovels.end(), i) and i != 'n')
        {
            check = true;
        }
    }
    if (!count(vovels.begin(), vovels.end(), n[n.size()-1]) and n[n.size()-1] != 'n')
    {
        cout << "NO";
        return;
    }

    cout << "YES" << endl;
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