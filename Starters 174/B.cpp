#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        vector<int> yCoords;
        for (auto &sq : squares) {
            yCoords.push_back(sq[1]);
            yCoords.push_back(sq[1] + sq[2]);
        }
        
        sort(yCoords.begin(), yCoords.end());
        yCoords.erase(unique(yCoords.begin(), yCoords.end()), yCoords.end());

        double low = yCoords.front(), high = yCoords.back();
        
        auto computeArea = [&](double y) {
            double areaAbove = 0.0, areaBelow = 0.0;
            for (auto &sq : squares) {
                double bottom = sq[1], top = (double)sq[1] + sq[2];
                double side = (double)sq[2];

                if (y >= top) {
                    areaBelow += side * side;
                } else if (y <= bottom) {
                    areaAbove += side * side;
                } else {
                    double belowPart = (y - bottom) * side;
                    double abovePart = (top - y) * side;
                    areaBelow += belowPart;
                    areaAbove += abovePart;
                }
            }
            return make_pair(areaBelow, areaAbove);
        };

        while (high - low > 1e-6) {
            double mid = (low + high) / 2.0;
            auto [areaBelow, areaAbove] = computeArea(mid);
            if (areaBelow < areaAbove) low = mid;
            else high = mid;
        }

        return low;
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
    int ans=0;
    int a[n];

    for(int i=0; i<n; i++) cin>>a[i];
    
    if(n==2) {
        cout<<abs(a[0]-a[1])<<endl;
        return;
    }

    for(int i=0; i<n; i++) {
        int x=a[i];

        if(i==0 or i==n-1 or (i!=1 and i!=n-2)) ans=max(ans, a[i]);
        if(i==1) x=abs(x-a[i-1]);
        if(i==n-2) x=abs(x-a[i+1]);

        ans=max(ans, x);
    }
    
    cout<<ans<<endl;
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

