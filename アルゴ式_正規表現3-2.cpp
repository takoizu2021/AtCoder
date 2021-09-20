#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;

int main() {
	string s;
	cin>>s;
	regex reg{R"(\d{3})"};
	smatch m;
	bool search = regex_search(s,m,reg);
	if(search) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}