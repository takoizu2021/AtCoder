#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	vector<int> t(n);
    t[0]=0, t[1]=a[1];
	for(int i=2; i<n; i++) {
		t[i] = min(t[i-1]+a[i],
                   t[i-2]+a[i]*2);
	}
	cout << t[n-1] << endl;
	return 0;
}