#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;

int main() {
	int n,x,y;
	cin>>n>>x>>y;
	int ans = x;
	for(int i=1; i<n; ++i) {
		if(i == 1) ans = y;
		else {
			ans = (x+y)%100;
			x = y;
			y = ans;
		}
	}
	cout<<ans<<endl;
	return 0;
}