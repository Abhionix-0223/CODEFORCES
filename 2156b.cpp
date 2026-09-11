#include <bits/stdc++.h>
using namespace std;
int operation(int a, string s)
{
    int i = 0, time = 0;
    while (a)
    {
        int k = 1;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'B')
            k = 0;
        }
        if (k)
        return time + a;
        if (i == s.size())
            i = 0;
        if (s[i] == 'A')
            a--;
        else if (s[i] == 'B')
            a >>= 1;
        time++;
        i++;
    }
    return time;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        long long arr[q];
        for (int j = 0; j < q; j++)
        {
            cin >> arr[j];
        }
        for (int k = 0; k < q; k++)
        {
            cout << operation(arr[k], s) << endl;
        }
    }
}
