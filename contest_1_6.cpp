#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a = 1;
        for (int i = 0; i < n; i++)
        {
            int b = a;
            while (b)
            {
                cout << b % 10 << " ";
                b = b / 10;
            }
            cout << endl;
            a *= 11;
        }
    }
}