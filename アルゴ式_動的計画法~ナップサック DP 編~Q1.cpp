#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const int inf = 1000000;

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; ++i) cin>>a[i];

	vector<int> dp(n+1,0);

    for(int i=0; i<n; ++i) dp[i+1] = max(dp[i],dp[i]+a[i]);
	cout << dp[n] << endl;
	return 0;
}