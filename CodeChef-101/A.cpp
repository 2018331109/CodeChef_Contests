#include <bits/stdc++.h>

using namespace std;



#define int long long



void solve()

{

    int n, m;

    cin >> n >> m;

    string s;

    cin >> s;

    string k;

    cin >> k;

    int ans = INT_MAX;



    // Iterate through each possible starting position i

    for (int i = 0; i <= n - m; i++) {

        int cnt = 0;



        

        for (int j = 0; j < m; j++) {

            if (s[i + j] >= k[j]) {

                int a = s[i + j] - '0';

                int b = k[j] - '0';

                cnt += min(a - b, 10 - a + b); 

            } else {

                int a = k[j] - '0';

                int b = s[i + j] - '0';

                cnt += min(a - b, 10 - a + b); 

            }

        }



        ans = min(ans, cnt);

    }



    cout << ans << endl;

}



signed main()

{

    ios_base::sync_with_stdio(false);

    cin.tie(0);

    cout.tie(0);

    int test;

    cin >> test;

    for (int t = 1; t <= test; t++)

    {

        solve();

    }

    return 0;

}


