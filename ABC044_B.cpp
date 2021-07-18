#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {  
  string w;
  cin>>w;
  
  map<char,int> ct;
  rep(i,w.size() ) {
    if(ct.count(w[i]) ) ct[w[i]]++;
    else ct[w[i]]=1;
  }
  
  string ans="Yes";
  for(auto p : ct) {
    auto k = p.first;
    auto v = p.second;
    if(v%2!=0) ans="No";
  }
  cout<<ans<<endl;  
}