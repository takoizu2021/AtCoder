#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a;
	cin>>n>>a;
	if(n%a==0) cout<<n/a<<endl;
	else cout<<n/a + 1<<endl;
	return 0;
}