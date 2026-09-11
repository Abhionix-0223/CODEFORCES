#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;

        cin >> n >> s;

        int firstA = -1;
        int lastB = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                firstA = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                lastB = i;
                break;
            }
        }

        if (firstA == -1 || lastB == -1 || firstA > lastB)
            cout << 0 << "\n";
        else
            cout << lastB - firstA << "\n";
    }
}