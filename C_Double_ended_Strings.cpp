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
        string a, b;
        cin >> a >> b;
        int maxlen = INT_MIN;
        int a_size = a.size(), b_size = b.size();
        if (a_size < b_size)
        {
            for (int i = 0; i < a_size; i++)
                b = '0' + b + '0';
            a = a + '#';
            for (int i = 0; i < a_size + b_size; i++)
            {
                int len = 0;
                for (int j = 0; j < a.size(); j++)
                {
                    if (a[j] == '0')
                        continue;
                    if (a[j] == b[j])
                        len++;
                    else
                    {
                        maxlen = max(len, maxlen);
                        len = 0;
                    }
                }
                a = '0' + a;
            }
        }
        else
        {
            for (int i = 0; i < b_size; i++)
                a = '0' + a + '0';
            b = b + '#';
            for (int i = 0; i < a_size + b_size; i++)
            {
                int len = 0;
                for (int j = 0; j < b.size(); j++)
                {
                    if (b[j] == '0')
                        continue;
                    if (a[j] == b[j])
                        len++;
                    else
                    {
                        maxlen = max(len, maxlen);
                        len = 0;
                    }
                }
                b = '0' + b;
            }
        }
        cout << a_size + b_size - 2 * maxlen << "\n";
    }
}