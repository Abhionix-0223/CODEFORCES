#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, k, m;
        cin >> s >> k >> m;
        if (s <= k)
        {
            cout << max(0, s - m % k) << endl;
        }
        else if (s > k)
        {
            if (m >= k)
            {
                if ((m / k) % 2 == 0)
                {
                    cout << s - m % k << endl;
                }
                else if ((m / k) % 2 != 0)
                {
                    cout << k - m % k << endl;
                }
            }
            else if (m < k)
                cout << s - m << endl;
        }
    }
}