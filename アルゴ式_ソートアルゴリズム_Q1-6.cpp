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
	//3.要素数が 1 以下の場合は何も行わない。
	if(a.size()<=1) return a;

	//配列を左右に分割してソートを行う。 X=?2N?? とおく。
	int n = a.size();
	int x = n/2;
	
	vector<int> l,r;
	//1.A[0],A[1],...,A[X?1] をこの順に配列 L に格納する。
	rep(i,x) l.push_back(a[i]);
	//2.A[X],A[X+2],...,A[N?1] をこの順に配列 R に格納する。
	rep2(i,x,n) r.push_back(a[i]);

	//3.L,R を再帰的にソートする。
	l = marge(l);
	r = marge(r);

	//4.R を逆順に並び替え、 L の最後尾に結合する。
	rep(i,r.size()) l.push_back(r[r.size()-1-i]);

	//5.空配列 B を用意し、 L が空になるまで以下を繰り返し行う。 
	vector<int> b;
	while(!l.empty()) {
		//5-1.L の先頭の要素を efirst? 、末尾の要素を elast? おく。
		//5-2.efirst? <= elast? ならば efirst? の値を B の末尾に追加し、
		//    efirst? を削除する。
		if(l.front() <= l.back()) {
			b.push_back(l.front());
			l.erase(l.begin());
		}
		//5-3.efirst > elast? ならば elast? の値を B の末尾に追加し、
		//    elast? を削除する。
		else {
			b.push_back(l.back());
			l.pop_back();
		}
	}
	//6.配列 B の値を出力する。
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