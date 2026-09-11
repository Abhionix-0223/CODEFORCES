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
        ll a, b;
        cin >> a >> b;
        ll div = 0;
        if (a < b and b % a == 0)
            div = b / a;
        else if (a >= b && a % b == 0)
            div = a / b;
        if (div)
        {
            int count = 0;
            while (div != 1)
            {
                if (div % 2 != 0)
                {
                    count = 0;
                    break;
                }
                div /= 2;
                count++;
            }
            if (count == 0 and div != 1)
                cout << -1 << "\n";
            else
                cout << count / 3 + (count % 3) / 2 + (count % 3) % 2 << "\n";
        }
        else
            cout << -1 << "\n";
    }
}