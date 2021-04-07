#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  vector<int> yoko(3);
  vector<vector<int> > tate(3,yoko);
  vector<vector<vector<int> > > a(2,tate); 
  
  rep(i,3) {
    rep(j,3) {
      cin>>a[0][i][j];
    }
  }
  
  int n,hit;
  cin>>n;
  rep(i,n) {
    cin>>hit;
    rep(i,3) {
      rep(j,3) {
        if(hit == a[0][i][j]) a[1][i][j]++;
      }
    }
  }
  
  int ans_tate=0;
  int ans_yoko=0;
  int ans_naname_l=0;
  int ans_naname_r=0;
  rep(i,3) {
    rep(j,3) {
      if(a[1][i][j] != 0) ans_yoko++;
      if(a[1][j][i] != 0) ans_tate++;
    }
    if(ans_yoko == 3||ans_tate == 3) break;
    else {
      ans_yoko = 0;
      ans_tate = 0;
    }
  }
  if(a[1][0][0] != 0) ans_naname_l++;
  if(a[1][2][2] != 0) ans_naname_l++;
  if(a[1][0][2] != 0) ans_naname_r++;
  if(a[1][2][0] != 0) ans_naname_r++;
  if(a[1][1][1] != 0) {
    ans_naname_l++;
    ans_naname_r++;
  }
  if(ans_tate == 3||ans_yoko == 3||ans_naname_l == 3||ans_naname_r == 3)
    cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}