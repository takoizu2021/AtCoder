#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	int n,m; cin>>n>>m;
	vector<int> a(n), b(m);
	for(int i=0; i<n; ++i) cin>>a[i];
	for(int i=0; i<m; ++i) cin>>b[i];

	sort(a.begin(), a.end());

	for(int i=0; i<m; ++i) {
		int left=0, right=n;
		while(left!=right) {
			int mid=(left+right) / 2;
			if(a[mid] > b[i]) { //‚à‚µ A[mid] > B[i] ‚È‚ç‚Î“š‚¦‚Í left ˆÈã mid ˆÈ‰º
				right = mid; //”ÍˆÍ‚ğ‹·‚ß‚é
			}
			else { //‚»‚¤‚Å‚È‚¯‚ê‚Î“š‚¦‚Í mid+1 ˆÈã right ˆÈ‰º
				left = mid+1; //”ÍˆÍ‚ğ‹·‚ß‚é
			}
		}

		int ans=left;
		cout<<ans<<endl;
	}
	
	return 0;
}