#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define neg cout<<-1<<end;
#define pb push_back


void solve()
{
    int n;
    cin>>n;
    int a[n];
    int mx=0;
    int ind=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            mx=a[i];
            ind=i;
        }
    }
    int b[n]= {};
    int c[n]= {};
    b[0]=a[0];
    c[n-1]=a[n-1];
    for(int i=1; i<n; i++)
    {
        b[i]=max(a[i], b[i-1]);
        c[n-i-1]=max(c[n-i], a[n-i-1]);
    }
    int ans=0;
    int j=ind;
    j--;
    while(j>=0)
    {
        ans+=b[j];
        j--;
    }

    j=ind;
    j++;
    while(j<n)
    {
        ans+=c[j];
        j++;
    }
    ans+=a[ind];
    cout<<ans<<endl;


}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

