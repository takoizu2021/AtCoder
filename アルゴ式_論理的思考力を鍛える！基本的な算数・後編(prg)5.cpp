#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,k;
	cin>>m>>k;
	if(m%k==0) cout<<m/k<<endl;
	else cout<<m/k+1<<endl;
	return 0;
}