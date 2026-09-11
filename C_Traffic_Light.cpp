#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        set<int> green;
        vector<int> other;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g')
                green.insert(i + 1);
            if (s[i] == c)
                other.push_back(i + 1);
        }
        int min_time = 0;
        if (c != 'g')
        {
            for (int i = 0; i < other.size(); i++)
            {
                green.insert(other[i]);
                auto it = green.find(other[i]);
                int data = other[i];
                it++;
                if (it != green.end())
                {
                    int next = *it;
                    min_time = max(min_time, next - data);
                    green.erase(other[i]);
                }
                else
                {
                    auto it1 = green.begin();
                    int next = *it1;
                    min_time = max(min_time, next + n - data);
                    green.erase(other[i]);
                }
            }
        }
        cout << min_time << endl;
    }
}