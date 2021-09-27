#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const int inf = 1000000;

int main() {
	int n;
	cin>>n;
	vector<int> w(n);
	int sum=0;
	for(int i=0; i<n; ++i) {
		cin>>w[i];
		sum += w[i];
	}

	vector<vector<bool> > dp(n+1, vector<bool> (sum+1,false));
    dp[0][0]=true;

    for(int i=0; i<n; ++i) {
        for(int j=0; j<=sum; ++j) {
            if(!dp[i][j]) continue;
            dp[i+1][j+w[i]] = true;
            dp[i+1][abs(j-w[i])] = true;
        }
    }

    int res = 0;
    while (!dp[n][res]) ++res;
    cout << res << endl;
	return 0;
}