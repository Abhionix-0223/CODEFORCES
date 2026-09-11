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
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << '\n'
                 << n << '\n';
            for (int i = 0; i < n; i++)
                cout << 1 << " ";
            cout << "\n";
        }
        else
        {
            if (n % 2)
            {
                if (k >= 3)
                {
                    cout << "YES" << '\n'
                         << (n - 3) / 2 + 1 << '\n';
                    for (int i = 0; i < (n - 3) / 2; i++)
                        cout << 2 << " ";
                    cout << 3 << "\n";
                }
                else
                    cout << "NO" << '\n';
            }
            else
            {
                if (k >= 2)
                {
                    cout << "YES" << '\n'
                         << (n) / 2  << '\n';
                    for (int i = 0; i < n / 2; i++)
                        cout << 2 << " ";
                    cout << '\n';
                }
                else
                    cout << "NO" << '\n';
            }
        }
    }
}