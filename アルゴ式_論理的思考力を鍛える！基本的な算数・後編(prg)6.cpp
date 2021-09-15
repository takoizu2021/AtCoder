#include <bits/stdc++.h>
using namespace std;

int main() {
	int u,t,a;
	cin>>u>>t>>a;
	int ans=u+(a-u+t-1)/t*t;
	cout << ans << endl;
	return 0;
}