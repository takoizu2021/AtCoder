#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	int n;
	cin>>n;
	int ct=0;
	while(n>0) {
		if(n%2==0) n /=2;
		else  --n;
		++ct;
	}
	cout << ct << endl;
	return 0;
}