#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
char sgn[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int r = 1, l = n, ct2 = 0, ct0 = 0, ct1 = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == '0')
                ct0++;
            else if (s[i] == '1')
                ct1++;
            else if (s[i] == '2')
                ct2++;
        }
        if (k == n)
        {
            for (int i = 1; i <= n; i++)
            {
                sgn[i] = '-';
            }
        }
        else
        {

            for (int i = 1; i <= n; i++)
            {
                if (i <= ct0 || i > n - ct1)
                    sgn[i] = '-';
                else if (i > ct0 + ct2 && i <= n - ct1 - ct2)
                    sgn[i] = '+';
                else
                    sgn[i] = '?';
            }
        }

        for (int i = 1; i <= n; i++)
            cout << sgn[i];
        cout << endl;
    }
}