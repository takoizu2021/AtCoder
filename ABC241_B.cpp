#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;
//Å‘åŒö–ñ” gcd(A,B)

int main() {
  int n,m;
  cin>>n>>m;
  vector<int> a(n), b(m);
  rep(i,n) cin>>a[i];
  rep(i,m) cin>>b[i];
  vector<bool> chk(m,false);
  rep(i,m) {
    rep(j,n) {
      if(chk[i]) continue;
      if(b[i]==a[j]) {
        chk[i]=true;
        a[j] = 0;
      }
    }
  }
  string ans = "Yes";
  rep(i,m) if(!chk[i]) ans = "No";
  cout<<ans<<endl;
}