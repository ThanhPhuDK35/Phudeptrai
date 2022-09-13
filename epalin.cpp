#include<bits/stdc++.h>
using namespace std;
int m1, m2, f[10001][10001];
string s;

void qhd()
{
    string a="", b=s, c=s;
    reverse(c.begin(), c.end());
    a=c;
    a=' '+a;
    b=' '+b;
    long long l1=a.size()-1, l2=b.size()-1;
    for(int i=0; i<=l1; i++) f[0][i]=0;
    for(int i=0; i<=l2; i++) f[i][0]=0;
    for(int i=1; i<=l1; i++)
    {
        for(int j=1; j<=l2; j++)
        {
            if(a[i] == b[j])
            {
                f[i][j]=1+f[i-1][j-1];
            }
            else
            {
                f[i][j]=max(f[i-1][j], f[i][j-1]);
            }
        }
    }
    m2=f[l1][l2];
}


int main()
{
    freopen("epalin.Inp","r",stdin);
    freopen("epalin.Out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>s;
    qhd();
    cout<<s.size()-m2;
}