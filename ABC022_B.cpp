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
  
  map<int,int> m;
  int a;  
  rep(i,n) {
    cin>>a;
    if(m.count(a)) m[a]++;
    else m[a]=1;
  }
  
  int sum=0,k,v;
  for (auto p : m) {
    k = p.first;
    v = p.second;
    sum += v;
  }
  int ans=sum-m.size();
  
  cout<<ans<<endl;
}