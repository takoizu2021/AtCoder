#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<vector<int> > a(n+1);
  
  int l;
  rep2(i,1,n+1) {
    cin>>l;
    a[l].push_back(i);
  }
  
  int ct=0;
  rep2(i,1,n+1) {
    rep(j,a[i].size()) {
      int k = 0;
      while(k < a[a[i][j]].size()) {
        if(a[a[i][j]][k] == i) ct++; 
        k++;
      }
    }
  }

  cout<<ct/2<<endl;
}