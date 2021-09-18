#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,k;
	cin>>a>>k;
	if(a%(k+1)!=0) cout<<-1<<endl;
	else cout<< a/(k+1)*k <<endl;
	return 0;
}