#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> a(n),b(m);
	rep(i,n) cin>>a[i]; rep(i,m) cin>>b[i];

	rep(i,n) rep(j,m) if(a[i] == b[j]) cout<<a[i]<<endl;

	
	return 0;
}