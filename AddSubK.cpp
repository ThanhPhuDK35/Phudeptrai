#include<bits/stdc++.h>
using namespace std;
long long t, n, k, a[10000001], x[10001], ans;

void xu_ly_nghiem()
{
    long long s=0;
    for(int i=1; i<=n; i++)
    {
        if(x[i] == 1)
        {
            s=s+a[i];
        }
        else
        {
            s=s-a[i];
        }
    }
    if(s % k == 0)
        ans=1;
}

void Try(long long i)
{
    if(ans == 1) return; 
    for(int t=1; t>=0; t--)
    {
        x[i]=t; 
        if(i == n)
            xu_ly_nghiem();
        else
            Try(i+1);
    }
}

int main()
{
    freopen("Addsubk.inp","r",stdin);
    freopen("Addsubk.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ans=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        Try(1);
        cout<<ans<<"\n";
    }
}