#include<bits/stdc++.h>

#define int long long
#define ii pair<int, int>
#define iii pair<ii, int>
#define vii vector<ii>
#define X first
#define Y second
using namespace std;

const int oo = 1e18;
const double eps = 0.00001;
const int mod = 1e9 + 7; //998244353
const int N = 2e5 + 5;

int test, n, m, k, w, ans = 0;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> test;
    while (test--) {
        cin >> n >> m >> k;
        cin >> w;
        vector<int> a(w + 1);
        for (int i = 1; i <= w; i++) {
            cin >> a[i];
        }
        vector<int> val;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int x1 = max(i - k + 1, 0ll);
                int y1 = max(j - k + 1, 0ll);
                int x2 = min(n - k, i);
                int y2 = min(m - k, j);
                val.push_back((x2 - x1 + 1) * (y2 - y1 + 1));
            }
        }
        sort(val.rbegin(), val.rend());
        sort(a.rbegin(), a.rend());
        ans = 0;
        for (int i = 0; i < w; i++) {
            ans += a[i] * val[i];
        }
        cout << ans << "\n";
    }
    return 0;
}