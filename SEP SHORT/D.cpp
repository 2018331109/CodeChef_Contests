#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve()
{
    int n;
    cin>>n;
    int a[n], b[n], c[n], d[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    int ans, gr;

    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            ans=a[i];
            c[i]=ans;

            gr=a[n-i-1];
            d[n-i-1]=gr;

        }
        else
        {
            ans=__gcd(ans, a[i]);
            c[i]=ans;

            gr=__gcd(gr, a[n-i-1]);
            d[n-i-1]=gr;
        }
    }

    int gg;
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            gg=__gcd(d[i+1], b[i]);
            ans=max(ans, gg);
            continue;
        }
        if(i==n-1)
        {
            gg=__gcd(c[i-1], b[i]);
            ans=max(ans, gg);
            continue;
        }

        gg=__gcd(c[i-1], d[i+1]);
        gg=__gcd(gg, b[i]);
        ans=max(ans, gg);

    }

    cout<<ans<<endl;


}

signed main()
{
    int t=1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
