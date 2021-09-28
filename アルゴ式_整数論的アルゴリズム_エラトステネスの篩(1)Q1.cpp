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
	vector<bool> v(30+1,true);
	for(int i=2; i<=3; ++i) {
		for(int j=2*i; j<=30; j+=i) v[j]=false;
	}
	for(int i=2; i<=30; ++i) if(v[i]&& !prime(i)) cout<<i<<endl;
	return 0;
}