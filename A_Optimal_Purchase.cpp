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
        ll a, b, c;
        cin >> a >> b >> c;
        if (b * 3 < c)
            cout << a * b << endl;
        else 
        {
            ll total = (a/3)*c;
            if(a%3 * b < c)
            total += (a%3)*b;
            else 
                total += c;
            cout<<total<<endl;
        }
    }
}