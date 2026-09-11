#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int count = 0;
        if (n == 1)
            cout << 1 << endl;
        else
        {
            s = "1" + s + "1";
            int len = 0;
            for (int i = 1; i <= n; i++)
            {
                if (s[i] == '0')
                {
                    len++;
                }
                else
                {
                    if (len == 0)
                        count++;
                    else
                    {
                        count++;
                        int x = len % 2 == 0 ? len / 2 - 1 : (len + 1) / 2 - 1;
                        count += x;
                        len = 0;
                    }
                }
            }
            cout << count << endl;
        }
    }
}