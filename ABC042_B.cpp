#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n,l;
  cin>>n>>l;
  
  vector<string> s(n);
  rep(i,n) cin>>s[i];
  
  sort(s.begin(),s.end());
  
  rep(i,n) cout<<s[i];
  cout<<endl;
}