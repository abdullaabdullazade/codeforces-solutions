#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, o[10000], sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> o[i];
        sum = sum + o[i];
    }
    if (sum > 0)
    {
        cout << "hard";
    }
    else
    {
        cout << "easy";
    }
}