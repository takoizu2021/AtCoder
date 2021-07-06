#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n; string s;
  cin>>n>>s;
  
  int ct=0, ans=0;
  
  rep(i,n-1) {
    set<char> ss;
    rep(i,n) ss.insert(s[i]);
    
    string x = s.substr(0,1+i);
    string y = s.substr(i+1,n-i);
    
    set<char> xs, ys;
    rep(j,x.size()) xs.insert(x[j]);
    rep(k,y.size()) ys.insert(y[k]);
    
    //int z=ss.size();
    for (auto value : ss) {
      if(xs.count(value) && ys.count(value)) ct++;
    }
    ans = max(ans,ct);
    ct=0;
  }
  
  cout<<ans<<endl;
}