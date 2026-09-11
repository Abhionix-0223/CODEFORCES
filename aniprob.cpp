#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin >> n >> d;
    int arr[n],pre[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pre[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i]=pre[i-1]+arr[i];
    }
    float alpha = pre[n-1]/d;
    int k=0;
    int l=0;
    float beta=1e4+7;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            beta = fabs((pre[j]-pre[i])-alpha)<beta?fabs((pre[j]-pre[i])-alpha):beta;
            k = fabs((pre[j]-pre[i])-alpha)==beta?i:k;
            l=fabs((pre[j]-pre[i])-alpha)==beta?j:l;
        }
    }
    
    int u_beta=1e4+7;
    int a0,b0;
    for(int i=0;i<d;i++){
        for(int j=0;j<=k;j++){
            for(int m=j+1;m<=k;m++){
                
            }
        }
    }
}