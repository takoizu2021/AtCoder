#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
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