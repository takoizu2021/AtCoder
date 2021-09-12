#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int n,m;
	cin>>s>>n>>m;
	char sn = s[n-1];
	s[n-1] = s[m-1];
	s[m-1] = sn;
	cout << s << endl;
	return 0;
}