#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
const int inf = 1000000;

int main() {
    int n,a,b;
    cin>>n>>a>>b;
    vector<string> s(n);

    for(int i=0; i<n; ++i) {
        cin>>s[i];
    }
    cout<< (s[a][b] == 'o'? "Yes":"No") <<endl;
	return 0;
}