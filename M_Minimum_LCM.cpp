#include <bits/stdc++.h>
using namespace std;
long lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int minlcm = INT_MAX;
        pair<int, int> p;
       if(n%2==0)
       {
        p = {n/2,n/2};
       }
       else
       {
           int best = 1;
        for (int i = 1; i*i <= n; i++)
        {
            if(n%i==0)
            {
                
                if(i<n)best = max(best,i);
                if(n/i<n)best = max(best,n/i);
                p = {best,n-best};
            }
            
        }  
       }
       
        cout << p.first << " " << p.second << endl;
    }
}