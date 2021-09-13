#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;

	int x=0;
	for(int i=1; i<=min(a,b); i++) {
		if(a%i==0 && b%i==0) x=i;
	}

	cout<<x<<endl;
	return 0;
}