#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const int inf = 1000000;

bool chk (int x) {
	if(x < 2) return false;
	for(int i=2; i*i<=x; ++i) {
		if(x%i==0) return false;		
	}
	return true;
}

int main() {
	int n;
	cin>>n;

	int p=0;
	for(int q=1; q<n; ++q) if(chk(q) && chk(n-q)) p=n-q;
	
	cout << p << endl;
	return 0;
}