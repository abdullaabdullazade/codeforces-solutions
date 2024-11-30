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
    string n;
    cin >> n;
    string t = n;
    reverse(all(t));
    set<int> s;
    for (char i : n)
        s.insert(i);
    if (n == t)
    {
        if (n.length() == 1 or s.size() == 1)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            cout << n.length() - 1 << endl;
        }
        return;
    }
    else
    {
        cout << n.length() << endl;
    }
}

signed main()
{
    $fr13nd_7$
    solve();
    return 0;
}

/*

25 21 18

25 21 18

25 21 18


18 18 18
25 21
25 21
25 21


*/