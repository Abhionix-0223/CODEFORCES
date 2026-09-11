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
        ll n;
        cin >> n;
        bool yes = 0;
        for (int i = 1; i <= 2520; i++)
        {
            ll m = n;
            while (m)
            {
                int d = m % 10;
                if (d != 0)
                {
                    if (n % d == 0)
                        yes = 1;
                    else
                    {
                        yes = 0;
                        break;
                    }
                }
                m /= 10;
            }
            if (yes)
                break;
            n++;
        }
        cout << n << "\n";
    }
}