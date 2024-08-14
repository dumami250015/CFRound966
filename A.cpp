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

int test;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        if (s[0] != '1' || s[1] != '0' || s[2] == '0') {
            cout << "NO\n";
            continue;
        }
        int num = 0;
        for (int i = 2; i < s.size(); i++) {
            num = num * 10 + (s[i] - '0');
        }   
        if (num >= 2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}