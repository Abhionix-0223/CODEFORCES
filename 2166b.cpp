#include <bits/stdc++.h>
using namespace std;
float min(int x, float y)
{
    int min;
    if (x * 1.0 > y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        if (b*n<=a || b>=a)
        {
           cout<<1<<endl;
        }
        else if (n*b>a &&b<a)
        {
          cout<<2<<endl;
        }
    }
}