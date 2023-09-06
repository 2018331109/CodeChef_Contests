 #include<bits/stdc++.h>
using namespace std;
#define int long long


void solve()
{
    int x, h;
    cin>>x>>h;
    int xx=x/2;
    int cnt=h/xx;
    cnt=min(5ll, cnt);
    h-=(cnt*xx);
    int ans=cnt;
    if(h>0)
    {
        ans+=((h+x-1)/x);
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
