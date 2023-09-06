#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve()
{
    int n;
    cin>>n;
    int a[n];
    int b[n]= {};
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==0)
        {
            b[i]=a[i];
            continue;
        }
        b[i]=b[i-1]+a[i];


    }

    int ans=0;
    for(int i=1; i<n; i++)
    {
        int v=b[n-1]-b[i-1];
        v*=a[i-1];
        ans+=v;
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

