#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int h,w;
  cin>>h>>w;
  
  vector<char> yoko(w+2,'#');
  vector<vector<char> > a(h+2,yoko);
  
  rep(i,h+2) {
    rep(j,w+2) {
      if(0<i&&i<h+1) {
        if(0<j&&j<w+1) cin>>a[i][j];
      }
    }
  }
  
  rep(i,h+2) {
    rep(j,w+2) {
      cout<<a[i][j];
      if(j == w+1) cout<<endl;
    }
  }
}