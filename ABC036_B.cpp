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
  
  vector<char> v(n);
  vector<vector<char> > s(n,v);
  rep(i,n) rep(j,n) cin>>s[i][j];
  
  rep(j,n) {
    for(int i=n-1; i>=0; i--) {
      cout<<s[i][j];
      if(i == 0) cout<<endl;
    }
  }
}