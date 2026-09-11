#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll trade = k + 1;
        ll stick = x;
        ll coal = y * k;
        if (stick <= coal +k)
            trade += (coal+k - stick + x-2) / (x - 1);
        cout << trade << "\n";
    }
}