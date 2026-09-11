#include <bits/stdc++.h>
using namespace std;

string operation(string s, set<string> &no)
{
    if (s.size() == 1)
    {
        no.insert(s);
        return s;
    }
    char c = s.back();
    s.pop_back();
    no.insert(operation(s, no));
    s.pop_back();
    s.push_back(c);
    operation(s, no);
    no.insert(operation(s, no));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, s1,s2;
        cin >> n >> s;
        int m = n;
        for (int i = n - 1; i >= 0; i--)
            s1.push_back(s[i]);
        set<string> no;
        s2 = operation(s1,no);
        cout<<no.size()<<endl;
    }
}