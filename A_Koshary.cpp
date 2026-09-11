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
        int a, b;
        cin >> a >> b;
        if (a % 2 != 0 and b % 2 != 0)
        cout<<"NO\n";      
        else
        cout<<"YES\n";
    }
}