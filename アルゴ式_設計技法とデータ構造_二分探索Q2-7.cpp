#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const long long inf = 1000000000000000000; //10^18

//f(x)‚ð‹‚ß‚éŠÖ”
long long f(long long x) {
    return x*(x+1)/2;
}

int main() {
	int n; cin>>n;
	vector<long long> x(n);
	for(int i=0; i<n; ++i) cin>>x[i];

	for(int i=0; i<n; ++i) {
		long long left=0, right=2*1000000000;
		while(left!=right) {
			long long mid = (left+right) / 2;
			if(f(mid) >= x[i]) {
				right = mid;
			}
			else {
				left = mid+1;
			}
		}
		cout<<left<<endl;
	}
	return 0;
}