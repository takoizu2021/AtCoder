#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
    int n;
    cin>>n;
    vector<int> t(n+1);
    t[0]=1;
    rep2(i,1,n+1) {
        if(i-3 >= 0) t[i] += t[i-3];
        if(i-2 >= 0) t[i] += t[i-2];
        if(i-1 >= 0) t[i] += t[i-1];
    }
	cout << t[n] << endl;
	return 0;
}