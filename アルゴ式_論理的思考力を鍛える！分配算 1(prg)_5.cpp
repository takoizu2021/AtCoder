#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,k;
	cin>>a>>b>>k;
	if( (b+a)%(k+1)!=0 || (b+a)/(k+1)*k-a<0) cout<<-1<<endl;
	else cout<< (b+a)/(k+1)*k-a <<endl;
	return 0;
}