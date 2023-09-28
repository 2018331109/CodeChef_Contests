#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

const int mod=1e9+7;

void solve()
{
   int n;
   cin>>n;
   int a[n];
   int sum=0;
   int mn=mod;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       sum+=a[i];
       mn=min(mn, a[i]);
   }
   cout<<sum-mn<<endl;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;
    for(int t = 1; t <= test; t++)
    {
        solve();
    }
}

