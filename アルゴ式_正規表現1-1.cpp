#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;

int main() {
	string s;
	cin>>s;
	regex reg{R"(metho+d)"};
	smatch m;
	bool search = regex_search(s,m,reg);
	if(search) cout<<"Yes"<<endl;
	else       cout<<"No"<<endl;
	return 0;
}