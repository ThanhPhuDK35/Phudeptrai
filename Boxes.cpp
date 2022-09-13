#include <bits/stdc++.h>
using namespace std;
long long t, n;
string x[100001], y[100001];
map <string, string> c;
bool ck = 1;

bool kt(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9') 
            continue;
        else 
            return false;
    }
    return true;
}

int main()
{
    freopen("boxes.inp", "r", stdin);
    freopen("boxes.out", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n; 
        for (int i = 1; i <= n; i++)
        {
            cin>>x[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin>>y[i];
        }
        for (int i = 1; i <= n; i++)
        {
            c[x[i]] = ""; 
            c[y[i]] = "";
        }
        ck=1;
        for (int i = 1; i <= n; i++)
        {
            if (kt(x[i]) && kt(y[i]))
            {
                if (x[i] != y[i])
                {
                    ck = 0; 
                    break;
                }
            }
            else 
            if (kt(x[i]) && !kt(y[i]))
            {
                if (c[y[i]] == "") 
                    c[y[i]] = x[i];
                else 
                    if (c[y[i]] != x[i])
                    {
                        ck = 0; break;
                    }
            }
            else if (!kt(x[i]) && kt(y[i]))
            {
                if (c[x[i]] == "") 
                    c[x[i]] = y[i];
                else if (c[x[i]] != y[i])
                {
                    ck = 0; break;
                }
            }
        }
        if (ck == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                if (!kt(x[i]) && !kt(y[i]))
                {
                    if (c[x[i]] != c[y[i]] && c[x[i]] != "" && c[y[i]] != "")
                    {
                        ck = 0; break;
                    }
                    else
                    {
                        if (c[x[i]] == "") 
                            c[x[i]] = c[y[i]];
                        else 
                            if(c[y[i]] == "") 
                                c[y[i]] = c[x[i]];
                    }
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            c[x[i]] = ""; 
            c[y[i]] = "";
        }
        cout << ck << "\n";
    }
}