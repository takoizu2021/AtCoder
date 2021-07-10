#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<pair<int,int> > v(n);
  for(int i=0; i<n; i++) cin>>v[i].second>>v[i].first;
  
  sort(v.begin(),v.end());
  
  auto d=v;
  
  for(int i=0; i<n; i++) cout<<v[i].second<<" "<<v[i].first<<endl; 
  
}