#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,k;
	cin>>a>>k;
	if(a%k==0) cout<<a<<endl;
	else cout<< a+(k-a%k) <<endl;
	return 0;
}