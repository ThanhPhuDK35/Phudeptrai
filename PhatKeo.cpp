#include<bits/stdc++.h>
using namespace std;
long long n, k, s;

int main()
{
    freopen("phatkeo.Inp", "r", stdin);
    freopen("phatkeo.Out", "w", stdout);
    cin>>n>>k;
    s=1;
    if(k==1)
    {
        cout<<n;
        return 0;
    }
    for(int i=1; i<=k; i++)
    {
        n=n-s;
        cout<<s<<" ";
        s++;
        if(i+1 == k)
        {
            cout<<n<<" ";
            return 0;
        }
    }
}