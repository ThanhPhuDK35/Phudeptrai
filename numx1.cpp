#include<bits/stdc++.h>
using namespace std;
long long n,k,sc,sd,sk,a,b,c,d;

int main()
{
    freopen("NumX1.Inp", "r", stdin);
    freopen("NumX1.Out", "w", stdout);
    cin>>a>>b>>c>>d;
    long long k=c/__gcd(c,d)*d;
    sc=b/c-(a-1)/c;
    sd=b/d-(a-1)/d;
    sk=b/k-(a-1)/k;
    cout<<sc+sd-sk;
}

