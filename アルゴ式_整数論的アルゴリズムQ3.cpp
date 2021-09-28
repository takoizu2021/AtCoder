#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const int inf = 1000000;

bool chk (long long x) {
	if(x < 2) return false;
	for(long long i=2; i*i<=x; ++i) {
		if(x%i==0) return false;		
	}
	return true;
}

int main() {
	long long n;
	cin>>n;
	
	cout << (chk(n)? "Yes":"No") << endl;
	return 0;
}