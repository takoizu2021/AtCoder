#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
const int mod=998244353;
using ll = long long;
//Å‘åŒö–ñ” gcd(A,B)

int main() {
  int n;
  cin>>n;
  vector<string> s(n);
  rep(i,n) cin>>s[i];
  
  int ans = inf;
  
  rep(x,10) {
    char c = x + '0';
    vector<int> num(10);
    rep(i,n) {
      rep(j,10) if(s[i][j] == c) ++num[j];
    }
    int now=0;
    rep(i,10) {
      int t = i+10*(num[i]-1);
      now = max(now, t);
    }
    ans = min(ans,now);
    //cout << ans << endl;
  }
  cout << ans << endl;
  
}