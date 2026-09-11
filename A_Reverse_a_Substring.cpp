#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin >> n >> s;
    bool yes = 0;
    int start_idx, end_idx;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            start_idx = i + 1;
            end_idx = i + 2;
            yes = 1;
            break;
        }
    }
    if (yes)
        cout << "yes" << "\n"
             << start_idx << " " << end_idx << "\n";
    else
        cout << "NO" << "\n";
}