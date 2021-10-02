#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	long long a,b;
	cin>>a>>b;

	long long x=a-b,ans=0;
	for(long long i=1; i*i<=x; ++i) {
		if(x%i != 0) continue;
		if(i>b) ++ans;
		if(x/i != i && x/i>b) ++ans;
	}
	cout << ans << endl;
	return 0;
}