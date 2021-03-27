#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;

int main() {
  int h,w,x,y;
  cin>>h>>w>>x>>y;
  
  x--;
  y--;
  
  vector<char> vec(w);
  vector<vector<char> > masu(h,vec);
  rep(i,h) {
    rep(j,w) {
      cin>> masu[i][j];
    }
  }
  

  int ans = 0;
  if(masu[x][y] == '.') {
    ans ++;
    for(int i=x-1; i>=0; i--) { //x wå≈íË è„
      if(masu[i][y] == '.') {
        ans ++;
      }
      else {
        break;
      }
    }
    for(int i=x+1; i<h; i++) { //x wå≈íË â∫
      if(masu[i][y] == '.') {
        ans ++;
      }
      else {
        break;
      }
    }
    for(int i=y-1; i>=0; i--) { //y hå≈íË ç∂
      if(masu[x][i] == '.') {
        ans ++;
      }
      else {
        break;
      }
    }
    for(int i=y+1; i<w; i++) { //y hå≈íË âE
      if(masu[x][i] == '.') {
        ans ++;
      }
      else {
        break;
      }
    }
  }
  
  cout<<ans<<endl;
}