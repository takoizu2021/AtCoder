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
  string k; int v;
  int sum=0;
  rep(i,n) {
    cin>>k>>v;
    m[k] = v;
    sum += m[k];
  }
  
  string ans="atcoder";
  for(auto p : m) {
    auto pk = p.first;
    auto pv = p.second;
    if(sum/2 < pv) ans=pk;
  }
  cout<<ans<<endl;
}