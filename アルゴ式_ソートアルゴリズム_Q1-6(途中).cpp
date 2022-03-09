#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

void pri(int n, vector<int> a) {
	rep(i,n) {
		cout<<a[i];
		if(i!=n-1) cout<<" ";
		else cout<<endl;
	}
	return;
}

vector<int> marge(vector<int> a) {
	//ベースケース
	if(a.empty()) return a;

	int n = a.size();
	int x = n/2;
	vector<int> l,r;
	rep(i,x) l.push_back(a[i]);
	rep2(i,x,n) r.push_back(a[i]);

	l = marge(l);
	r = marge(r);

	rep(i,r.size()) l.push_back(r[r.size()-1-i]);

	vector<int> b;
	while(!l.empty()) {
		if(l.front() <= l.back()) {
			b.push_back(l.front());
			l.erase(l.begin());
		}
		else {
			b.push_back(l.back());
			l.pop_back();
		}
	}
	return b;
}

int main() {
    int n;
    cin>>n;
	vector<int> a(n);
    rep(i,n) cin>>a[i];

	a = marge(a);

	pri(n,a);

	return 0;
}