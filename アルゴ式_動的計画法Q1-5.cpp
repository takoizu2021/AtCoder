#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i; i<n; ++i) cin>>a[i];

	vector<int> t(n);
	t[0]=0, t[1]=a[1];
	for(int i=2; i<n; ++i) {
		int mn = 100000;
		int p=m;
		if(i<m) p=i; 
		for(int j=1; j<=p; ++j) {
			if(t[i-j]+a[i]*j < mn) mn=t[i-j]+a[i]*j;
		}
		t[i] = mn;
	}
	cout << t[n-1] << endl;
	return 0;
}