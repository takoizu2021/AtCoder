#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	int n; cin>>n;
	vector<int> w(n);
	for(int i=0; i<n; ++i) cin>>w[i];

	vector<int> v = w;
	sort(v.begin(), v.end());

	for(int i=0; i<n; ++i) {
		int left=0, right=n-1;
		while(left!=right) {
			int mid = (left+right) / 2;
			if(v[mid] >= w[i]) {
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