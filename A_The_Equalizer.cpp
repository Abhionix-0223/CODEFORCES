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
        int n, k;
        cin >> n >> k;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }
        if (sum % 2 != 0)
            cout << "yes\n";
        else if (n * k % 2 == 0)
            cout << "yes\n";
        else if (n * k % 2 != 0)
            cout << "no\n";
    }
}