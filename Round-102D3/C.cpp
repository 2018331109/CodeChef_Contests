#include <bits/stdc++.h>
using namespace std;

#define int long long
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 1;

    for (int i = 0; i < n - 2; i += 2)
    {
        int a = s[i] - '0';
        int b = s[i + 1] - '0';
        int c = s[i + 2] - '0';

        if ((a & b) != c && (a | b) != c && (a ^ b) != c)
        {
            cout << 0 << endl;  
            return;
        }
    }

    for (int i = 0; i < n - 2; i += 2)
    {
        int a = s[i] - '0';
        int b = s[i + 1] - '0';
        int c = s[i + 2] - '0';

        int cnt = 0;
        if ((a & b) == c)
            cnt++;
        if ((a | b) == c)
            cnt++;
        if ((a ^ b) == c)
            cnt++;

        ans = (ans * cnt) % mod;
    }

    cout << ans << endl;
}

signed main()
{
    int test = 1;
    cin >> test;
    for (int t = 1; t <= test; t++)
    {
        solve();
    }
    return 0;
}

