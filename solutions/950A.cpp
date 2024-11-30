#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define $fr13nd_7$                \
    ios_base::sync_with_stdio(0); \
    cout.tie(0);                  \
    cin.tie(0);
#define all(v) v.begin(), v.end()
#define int long long
#define pb push_back
#define ep emplace_back
#define pii pair<int, int>
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

int MAX = -1e9;

signed multiply(vector<int> &v)
{
    int prod = 1;
    for (auto &x : v)
    {
        prod *= x;
    }
    return prod;
}
signed sum(vector<int> &v)
{
    int prod = 1;
    for (auto &x : v)
    {
        prod += x;
    }
    return prod;
}

signed lcm(int a, int b)
{
    return a * b / __gcd(a, b);
}
bool check_prime(int a)
{
    if (a <= 1)
        return false;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int l, r, a;
    cin >> l >> r >> a;

    int min_lr = min(l, r);
    int max_lr = max(l, r);
    
    int diff = max_lr - min_lr;
    if (a >= diff)
    {
        a -= diff;
        min_lr += diff;
    }
    else
    {
        min_lr += a;
        a = 0;
    }
    
    int total = min_lr * 2 + (a / 2) * 2;

    cout << total << endl;
}


signed main()
{
    $fr13nd_7$
    solve();
    return 0;
}