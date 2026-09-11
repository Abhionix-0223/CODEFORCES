#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        bool pres = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == k)
            {
                pres = true;
            }
        }
        if (pres)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}