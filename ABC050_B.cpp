#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  vector<int> t(n);
  int sum=0;
  rep(i,n) {
    cin>>t[i];
    sum += t[i];
  }
  int m;
  cin>>m;
  
  int p,x,ans;
  rep(i,m) {
    cin>>p>>x;
    int tp = t[p-1]-x;
    ans = sum-tp;
    cout<<ans<<endl;
  }
}