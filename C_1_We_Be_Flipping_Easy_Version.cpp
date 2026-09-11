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
        vector<ll> a(n);
        for (int i = 0; i <n; i++) 
        {
            cin >> a[i];
        }  
        vector<int> opts;
        int fc = 0;  
        for (int i = n-1; i >= 0; i--) 
        {
            ll current_val = (fc % 2 == 1) ? -a[i] : a[i];
            
            if (current_val > 0) 
            {
                opts.push_back(i+1);
                fc++;
            }
        }
        cout << opts.size() << "\n";
        for (int i = 0; i < opts.size(); i++) 
        {
            cout << opts[i] << (i == opts.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}