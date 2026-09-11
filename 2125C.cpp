#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        long long count = 0;
        for (long long i = l; i <= r; i++)
        {
            if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
                count++;
        }
        cout << count;
    }
}