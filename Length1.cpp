#include<bits/stdc++.h>
using namespace std;
long long n, q, a[200005], b[200005], l, r;

int main()
{
   // freopen("length1.Inp","r",stdin);
   // freopen("length1.Out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    b[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    while(q--)
    {
        cin>>l>>r;
        cout<<b[r]-b[l]-a[l]*(r-l)<<"\n";
    }
}
