#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;

int main() {
	string s;
	cin>>s;
	regex reg{R"(^a{1,5}b{10}c*$)"};
	smatch m;
	bool search = regex_search(s,m,reg);
	if(search) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}