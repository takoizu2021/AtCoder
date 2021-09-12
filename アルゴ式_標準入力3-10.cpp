#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s,ans;
	int left=0,right=0;
	for(int i=0; i<n; i++) {
		cin>>s;
		if(s=="left") left++;
		else right++;
	}
	if(left > right) ans="left";
	else if(left < right) ans="right";
	else ans="same";
	cout << ans << endl;
	return 0;
}