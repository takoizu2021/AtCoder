#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<vector<int> > a(n,vector<int> (n,0));
	for(int i=0; i<n; ++i) cin>>a[0][i];

	for(int i=1; i<n; ++i) {
		for(int j=0; j<n; ++j) {
					   a[i][j] += a[i-1][j];
			if(j-1>=0) a[i][j] += a[i-1][j-1];
			if(j+1< n) a[i][j] += a[i-1][j+1];
			a[i][j] %= 100;
		}
	}

	cout << a[n-1][n-1] << endl;
	return 0;
}