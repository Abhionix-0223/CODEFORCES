#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, a, b, c;
        cin >> m>> a>> b>> c;
        int total_seat = 0;
        int rest_a, rest_b;
        if (a < m)
        {
            total_seat += a;
            rest_a = m - a;
        }
        else
        {
            total_seat += m;
            rest_a = 0;
        }
        if (b < m)
        {
            total_seat += b;
            rest_b = m - b;
        }
        else
        {
            total_seat += m;
            rest_b = 0;
        }
        if (rest_a + rest_b > c)
            total_seat += c;
        else
            total_seat += rest_a + rest_b;
        cout << total_seat << endl;
    }
}