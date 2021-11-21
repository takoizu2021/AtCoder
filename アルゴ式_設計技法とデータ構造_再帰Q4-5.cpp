#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

bool func(int i, int j, vector<int> A) {
    //cout<<"i"<<i<<" : j"<<j<<" : "<<"j-A[i-1] : "<<j-A[i-1]<<endl;
    if(i == 0) {
        if(j == 0) return true;
        else return false;
    }
    else {
        bool flg = false;        
        if(j >= A[i-1] && func (i-1,j-A[i-1],A)) flg = true;
        if(func(i-1,j,A)) flg = true;
        return flg;
    }
}

int main() {
    int n,x;
    cin>>n>>x;
    vector<int> A(n);
    rep(i,n) cin>>A[i];

	cout << (func(n,x,A) ? "Yes":"No") << endl;
	return 0;
}