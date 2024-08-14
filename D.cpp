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

int test, n, a[N], pre[N], ans = 0;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> test;
    while (test--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pre[i] = pre[i - 1] + a[i];
        }
        string s;
        cin >> s;
        vector<int> left, right;
        s = ' ' + s;
        for (int i = 1; i <= n; i++) {
            if (s[i] == 'L') left.push_back(i);
            else right.push_back(i);
        }
        ans = 0;
        reverse(right.begin(), right.end());
        for (int i = 0; i < min(left.size(), right.size()); i++) {
            if (left[i] < right[i]) {
                ans += pre[right[i]] - pre[left[i] - 1];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}