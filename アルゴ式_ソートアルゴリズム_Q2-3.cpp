#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    sort(a.rbegin(),a.rend());
    int ans = 0;
    rep(i,k) ans += a[i];
	cout << ans << endl;
	return 0;
}