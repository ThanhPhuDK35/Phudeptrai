#include<bits/stdc++.h>
using namespace std;
string s;
long long ans=1, dem, tmp;

int main()
{
    freopen("lpalin.Inp","r",stdin);
    freopen("lpalin.Out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>s;
    for(long long i=0; i < s.size(); i++)
    {
        tmp=dem=1;
        for(long long j=i-1; j>=0; j--)
        {
            if(s[j] == s[i+tmp])
            {
                tmp++;
                dem+=2;
            }
            else
                break;
        }
        ans=max(ans, dem);
        tmp=1;
        dem=0;
        for(long long j=i; j>=0; j--)
        {
            if(s[j] == s[i+tmp])
            {
                tmp++;
                dem+=2;
            }
            else
                break;
        }
        ans=max(ans, dem);
    }
    cout<<ans;
}