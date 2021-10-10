#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	int n,k; cin>>n>>k;
	vector<int> a(n);
	for(int i=0; i<n; ++i) cin>>a[i];

	sort(a.begin(), a.end());

	long long count=0;
	for(int i=0; i<n; ++i) {
		int left=0, right=n;
		while(left!=right) {
			int mid = (left+right) / 2;;
			if(a[mid] >= k-a[i] ) { // ‚à‚µ A[mid] >= k-a[i] ‚È‚ç‚Î“š‚¦‚Í left ˆÈã mid ˆÈ‰º
				right = mid; // ”ÍˆÍ‚ğ‹·‚ß‚é
			}
			else { // ‚»‚¤‚Å‚È‚¯‚ê‚Î“š‚¦‚Í mid+1 ˆÈã right ˆÈ‰º
				left = mid+1; // ”ÍˆÍ‚ğ‹·‚ß‚é
			}
		}
		count += n-left;
	}

	cout << count << endl;
	return 0;
}