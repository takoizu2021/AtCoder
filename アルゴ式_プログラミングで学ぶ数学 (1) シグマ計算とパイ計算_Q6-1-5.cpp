#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; ++i) cin>>a[i];

	int ans=1;
	for(int i=0; i<n; ++i) ans = ans * a[i] % 10;
	
	cout << ans << endl;
	return 0;
}