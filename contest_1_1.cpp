#include <bits/stdc++.h>
using namespace std;

char upper(char c)
{
    if (97 <= (int) c && (int) c <= 122)
    {
     c = c - 32;
    }
    return c;
}
int main()
{
    string str,str2;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        str[i]=upper(str[i]);
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            cout << endl;
            continue;
        }
        // cout << str2[i];
        cout<< str[i];
    }
}