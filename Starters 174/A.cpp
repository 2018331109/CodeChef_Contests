class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            bool isGood = true;
            if (i - k >= 0 && nums[i] <= nums[i - k]) isGood = false;
            if (i + k < n && nums[i] <= nums[i + k]) isGood = false;
            if (isGood) sum += nums[i];
        }
        return sum;
    }
};
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ff first
#define ss second
const int mod = 1e9 + 7;
const int N = 200005;

void solve() {
    int n; cin>>n;
    int a[n];
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        mp[a[i]]++;
    }

    int cnt=0, f=0;
    for(auto it:mp) {
        if(it.ff!=0 and it.ss%2==1) cnt++;
        if(it.ff==0 or it.ss>=2) f=1;
    }

    cout<<cnt+f<<endl;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}

