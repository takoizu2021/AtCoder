#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;

const int inf = 100000;
int main() {
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0; i<n; ++i) cin>>a[i];

	vector<int> t(n,inf);
	t[0]=0, t[1]=a[1];
	for(int i=2; i<n; ++i) {
		for(int j=1; j<=m; ++j) {
			t[i] = min(t[i], t[i-j]+a[i]*j);
		}
	}
	cout << t[n-1] << endl;
	return 0;
}