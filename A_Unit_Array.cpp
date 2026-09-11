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
        int n;
        cin >> n;
        int positive = 0, negative = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                positive++;
            else
                negative++;
        }
        if (positive >= negative)
        {
            if (negative % 2)
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else
        {
            int d = 0;
            while (negative > positive)
            {
                d++;
                negative--;
                positive++;
            }
            if (negative % 2)
                cout << d + 1 << '\n';
            else
                cout << d << '\n';
        }
    }
}