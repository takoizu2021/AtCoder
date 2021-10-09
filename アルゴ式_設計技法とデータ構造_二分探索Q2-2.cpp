#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	double n,m;
	cin>>n>>m;

	double left=0, right=10;
	while(right-left > 1e-4 ) {		
		double mid = left+(right-left) /2;
		double sav = n;
		for(int i=0; i<=5; ++i) {
			if(i==0) sav += 1;
			else sav = (sav*mid)+1;
		}
		//cout<<sav<<" : "<<left<<" : "<<right<<" : "<<mid<<endl;
		if(sav < m) {
			left = mid;
		}
		else {
			right = mid;
		}		
	}

	double x = left;
	cout << x << endl;
	return 0;
}