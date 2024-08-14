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

int test, n, m, a[N];

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> test;
    while (test--) {
        cin >> n;
        map<int, vector<int>> mp;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }
        cin >> m;
        while (m--) {
            string s;
            cin >> s;
            if (s.size() != n) {
                cout << "NO\n";
                continue;
            }
            map<char, vector<int>> mpc;
            s = ' ' + s;
            for (int i = 1; i < s.size(); i++) {
                mpc[s[i]].push_back(i);
            }
            bool ok = true;
            vector<bool> check(n + 1);
            for (int i = 1; i <= n; i++) {
                if (!check[i]) {
                    if (mp[a[i]] != mpc[s[i]]) ok = false;
                    for (auto x: mp[a[i]]) {
                        check[x] = true;
                    }
                }
            }
            if (ok) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}