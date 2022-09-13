#include<bits/stdc++.h>
using namespace std;
long long n, k, sc, sd, sk, se, a, b, c, d, e, cd, ce, de, scd, sce, sde;

int main()
{
    freopen("NumX2.Inp","r",stdin);
    freopen("NumX2.Out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>c>>d>>e;
    cd=c/__gcd(c,d)*d;
    ce=c/__gcd(e,c)*e;
    de=d/__gcd(d,e)*e;
    k=e/__gcd(cd,e)*cd;
    se=b/e-(a-1)/e;
    sc=b/c-(a-1)/c;
    sd=b/d-(a-1)/d;
    sk=b/k-(a-1)/k;
    scd=b/cd-(a-1)/cd;
    sce=b/ce-(a-1)/ce;
    sde=b/de-(a-1)/de;
    cout<<sc+sd+se-scd-sce-sde+sk;
}

