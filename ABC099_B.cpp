#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b;
  cin>>a>>b;
  
  int c=b-a;
  vector<int> t(1000);
  t[0] = 1 + 2;
  int ct=3;
  rep2(i,1,t.size()) {
    t[i] += t[i-1] + ct;
    ct++;
    //if(i == 999)cout<<i<<":"<<t[i]<<" ";
  }
  
  int ans =0;
  rep(i,t.size()) {
    if(t[i+1] - t[i] == c)  ans = t[i] - a;
  }
  cout<<ans<<endl;
}