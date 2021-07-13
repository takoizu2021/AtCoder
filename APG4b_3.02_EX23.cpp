#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin >> n;

  map<ll,int> m; //Ai,ŒÂ”
  int a;
  for(int i=0; i<n; i++) {
    cin>>a;
    if(m.count(a)) {
      m.at(a)++;
    }
    else m[a] = 1;
  }
  int ans_a=0, ans_c=0;
  for(auto p : m) {
    auto k = p.first;
    auto v = p.second;
    if(v > ans_c) {
      ans_c=v;
      ans_a=k;
    }
    //cout<<k<<" "<<v<<endl;
  }
  
  cout<<ans_a<<" "<<ans_c<<endl;
}