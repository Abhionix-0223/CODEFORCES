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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x] = i + 1;
        }
        int mx = INT_MIN;
        for(auto &val1 : m)
        {
            for(auto &val2 : m)
            {
                if(__gcd(val1.first,val2.first)==1)
                    mx = max(mx,val1.second+val2.second);
            }
        }  
        cout<<(mx!=INT_MIN?mx:-1)<<'\n';
    }
}