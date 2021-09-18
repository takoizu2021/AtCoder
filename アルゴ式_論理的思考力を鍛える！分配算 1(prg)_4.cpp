#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,k;
	cin>>a>>b>>k;
	if((b-a)%(k+1)==0 && b-a>=0) cout<<(b-a)/(k+1)*k+a <<endl;
	else cout<<-1<<endl;
	return 0;
}