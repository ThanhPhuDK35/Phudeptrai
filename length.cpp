#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],s[100001],k,ans=1e9;
int main()
{
  ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
freopen("LENGTH.INP ","r",stdin);
freopen("LENGTH.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        s[i]=s[i-1]+a[i];
    for(int i=1;i<=n;i++)
    {
        long long j;
        long long l,r,m;
        l=i;r=n;
        while(l<=r)
        {
            m=(l+r)/2;
            if(s[m]-s[i-1]<k)
                l=m+1;
            else
            {
                j=m;
                r=m-1;
            }
        }
       if(s[j]-s[i-1]>=k)
        ans=min(ans,j-i+1);
    }
    cout<<ans;
}
