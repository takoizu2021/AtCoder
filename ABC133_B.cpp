#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,d;
  cin>>n>>d;
  
  vector<int> za(d);
  vector<vector<int> > x(n,za); 
  rep(i,n) rep(j,d)cin>>x[i][j];
  
  double zah=0; int ct=0;
  rep(i,n) {
    rep2(j,i+1,n) {
      rep(l,d) {
        zah += abs(x[i][l] - x[j][l]) * abs(x[i][l] - x[j][l]);
      }
      for(int k=0; k<=zah; k++) {
        if(k*k == zah) {
          ct++;
          break;
        }
      }
      zah=0;
    }
  }
  cout<<ct<<endl;  
}