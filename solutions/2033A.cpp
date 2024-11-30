#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define $fr13nd_7$                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(v) v.begin(), v.end()
#define int long long
#define pb push_back
#define ep emplace_back
#define pii pair<int, int>
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

int MAX = -1e9;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int x = 0;
        int step = 1;
        bool sakurako_turn = true;
        while (abs(x) <= n)
        {
            if (sakurako_turn)
            {
                x -= step;
            }
            else
            {
                x += step;
            }
            sakurako_turn = !sakurako_turn;
            step += 2;
        }

        if (!sakurako_turn)
        {
            cout << "Sakurako" << endl;
        }
        else
        {
            cout << "Kosuke" << endl;
        }
    }
}

signed main()
{

    $fr13nd_7$ int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

/**
    ░█████╗░░░░░░░░░░░░░░░
    ██╔══██╗░░██╗░░░░██╗░░
    ██║░░╚═╝██████╗██████╗
    ██║░░██╗╚═██╔═╝╚═██╔═╝
    ╚█████╔╝░░╚═╝░░░░╚═╝░░
    ░╚════╝░░░░░░░░░░░░░░░
**/

/*


███████╗██████╗  ██╗██████╗ ███╗   ██╗██████╗      ███████╗
██╔════╝██╔══██╗███║╚════██╗████╗  ██║██╔══██╗     ╚════██║
█████╗  ██████╔╝╚██║ █████╔╝██╔██╗ ██║██║  ██║         ██╔╝
██╔══╝  ██╔══██╗ ██║ ╚═══██╗██║╚██╗██║██║  ██║        ██╔╝
██║     ██║  ██║ ██║██████╔╝██║ ╚████║██████╔╝███████╗██║
╚═╝     ╚═╝  ╚═╝ ╚═╝╚═════╝ ╚═╝  ╚═══╝╚═════╝ ╚══════╝╚═╝



*/

/*

 █████╗ ██╗   ██╗████████╗██╗  ██╗ ██████╗ ██████╗
██╔══██╗██║   ██║╚══██╔══╝██║  ██║██╔═══██╗██╔══██╗██╗
███████║██║   ██║   ██║   ███████║██║   ██║██████╔╝╚═╝
██╔══██║██║   ██║   ██║   ██╔══██║██║   ██║██╔══██╗██╗
██║  ██║╚██████╔╝   ██║   ██║  ██║╚██████╔╝██║  ██║╚═╝
╚═╝  ╚═╝ ╚═════╝    ╚═╝   ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝








███████╗██████╗  ██╗██████╗ ███╗   ██╗██████╗      ███████╗
██╔════╝██╔══██╗███║╚════██╗████╗  ██║██╔══██╗     ╚════██║
█████╗  ██████╔╝╚██║ █████╔╝██╔██╗ ██║██║  ██║         ██╔╝
██╔══╝  ██╔══██╗ ██║ ╚═══██╗██║╚██╗██║██║  ██║        ██╔╝
██║     ██║  ██║ ██║██████╔╝██║ ╚████║██████╔╝███████╗██║
╚═╝     ╚═╝  ╚═╝ ╚═╝╚═════╝ ╚═╝  ╚═══╝╚═════╝ ╚══════╝╚═╝


*/