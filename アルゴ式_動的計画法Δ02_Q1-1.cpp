#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;

int main() {
	int n,x,y;
	cin>>n>>x>>y;
	vector<int> a(n);
	a[0] = x, a[1] = y;
	for(int i=2; i<n; ++i) a[i] = (a[i-2]+a[i-1]) % 100;

	cout<<a[n-1]<<endl;
	return 0;
}