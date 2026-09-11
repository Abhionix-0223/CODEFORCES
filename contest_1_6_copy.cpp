#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int **p = (int **)malloc(n * sizeof(int *));
        p[0]=(int *)malloc( sizeof(int));
        p[0][0]=1;
        for (int i = 1; i < n; i++)
        {
            p[i] = (int *)malloc((i+1)* sizeof(int));
            p[i][0] = 1;
            p[i][i] = 1;
            if (i >= 2)
            {  
                for (int j = 1; j < i ; j++)
                {
                    p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
                }
            }
        }
        for (int i = 0; i<n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }               
        free(p);   
    }
}