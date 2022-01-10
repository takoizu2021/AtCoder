#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
	int n,x,y;
	cin>>n>>x>>y;
	vector<int> a(x),b(y);
	rep(i,x) cin>>a[i];
	rep(i,y) cin>>b[i];

	vector<int> ans(n+1);
	rep(i,x) ans[a[i]]++;
	rep(i,y) ans[b[i]]++;

	int ct = 0;
	rep2(i,1,n) if(!(ans[i])) ct++;

	cout<<ct<<endl;
	return 0;
}