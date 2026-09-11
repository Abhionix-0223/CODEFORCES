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
        string s;
        cin >> s;
        s = ')' + s;
        stack<char> st;
        for (int i = 1; i <= n; i++)
        {
            if (s[i] == '(')
                st.push(s[i]);
            else if (s[i] == ')')
            {
                if (st.size()!= 0 && st.top() == '(')
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        cout << st.size() / 2 << "\n";
    }
}