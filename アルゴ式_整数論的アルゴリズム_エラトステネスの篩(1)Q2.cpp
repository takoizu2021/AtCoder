#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const int inf = 1000000;

bool prime (int n) {
	if(n<2) return false;
	for(int i=2; i*i<=n; ++i) if(n%i==0) return false;
	return true;
}
int main() {
	int n=100;
	vector<bool> v(n+1,true);
	for(int i=2; i<=5; ++i) {
		for(int j=i*2; j<=n; j+=i) v[j]=false;
	}
	int ans=0;
	for(int i=2; i<=n; ++i) if(v[i] && !prime(i)) ans++;
	
	cout<<ans<<endl;
	return 0;
}