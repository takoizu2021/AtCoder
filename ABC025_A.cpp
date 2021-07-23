#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  string s; int n;
  cin>>s>>n;
  
  int ct=0;
  rep(i,s.size() ) {
    rep(j,s.size() ) {
      ct++;      
      if(ct == n) cout<<s[i]<<s[j]<<endl;
    }
  }
}