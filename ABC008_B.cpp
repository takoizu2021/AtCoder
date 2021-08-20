#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  map<string,int> m;
  string k;
  rep(i,n) {
    cin>>k;
    if(m.count(k)) m[k]++;
    else  m[k]=1;
  }
  
  string ans;
  int mx=0;
  for(auto p:m) {
    auto key = p.first;
    auto vol = p.second;
    if(mx<=vol) {
      mx=vol;
      ans=key;
    }
  }
  
  cout<<ans<<endl;
}