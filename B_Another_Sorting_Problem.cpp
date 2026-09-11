#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int md = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (i > 0 && a[i-1] > a[i]) {
                md = max(md, a[i-1] - a[i]);
            }
        }
        
        if (md == 0) {
            cout << "YES\n";
            continue;
        }
        
        bool sortp = false;
        int cd[2] = {md, md + 1};
        
        for (int k : cd) {
            int prev = -2e9;
            bool ok = true;
            for (int i = 0; i < n; ++i) {
                if (a[i] >= prev) {
                    prev = a[i];
                } else if (a[i] + k >= prev) {
                    prev = a[i] + k;
                } else {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                sortp = true;
                break;
            }
        }
        
        if (sortp) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}