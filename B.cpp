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

int test, n;
bool check[N];

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> test;
    while (test--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            check[i] = 0;
        }
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            check[x] = 1;
            if (i == 1) continue;
            if (check[x - 1] == 0 && check[x + 1] == 0) ok = false;
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}