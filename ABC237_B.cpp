#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;

int main() {
  int h,w;
  cin>>h>>w;
  vector<vector<int> > a(h,vector<int> (w));
  rep(i,h) rep(j,w) cin>>a[i][j];
  
  rep(j,w) {
  	rep(i,h) cout<<a[i][j]<<" ";
    cout<<endl;
  }
  
  
}