#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, d;
    cin >> n >> d;
    long long win = 0;
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    auto left = v.begin();
    auto right = v.end() - 1;
    while (true)
    {
        long long needed = d / (*right);
        if (right - left >= needed)
        {
            left += needed;
            if (left <= right)
                win++;
            else
                break;
        }
        else
            break;
        right--;
    }
    cout << win << "\n";
}