#include <bits/stdc++.h>

using namespace std;



#define int long long

#define pb push_back

#define no cout<<"NO"<<endl;

#define ies cout<<"YES"<<endl;

#define neg cout<<-1<<endl;



int md = 1e9+7;



void solve()

{

     int n, h;

     cin>>n>>h;

     int a[n];

     for(int i=0;i<n;i++)

     {

         cin>>a[i];

     }

     sort(a, a+n);



     int left=0, right=a[n-1]+2;

     while(left<right)

     {

         int mid=left+(right-left)/2;



         int x=mid;

         int sum=0;

         for(int i=0;i<n;i++)

         {

             if(a[i]>x)

             {

                 sum+=a[i];

             }

         }

         if(sum<h)

         {

             right=mid;

         }

         else

         {

             left=mid+1;

         }

     }



     cout<<right<<endl;





}



signed main()

{

    ios_base::sync_with_stdio(false);

    cin.tie(0);

    cout.tie(0);

    int test=1;

    cin>>test;

    for(int t=1; t<=test; t++)

    {

        solve();

    }



}


