#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const long long inf = 10000000000000; //10^13

int eratosthenes(int n) {
	vector<bool> prime(n+1,true);    
	prime[0]=prime[1]=false;
    int res=0;
	for(int p=2; p*p<=n; ++p) {
		if(!prime[p]) continue;
        ++res;
		for(int q=p*2; q*q<=n; q+=p) prime[q]=false;
	}
	return res;
}
int main() {
	int n;
	cin>>n;

	int res = eratosthenes(n);
	cout << res << endl;
	return 0;
}