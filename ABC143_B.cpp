#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<int> d(n);
  rep(i,n) cin>>d[i];
  
  int tot = 0;
  rep(i,n) {
    rep2(j,i+1,n) {
      tot += d[i] * d[j];
    }
  }
  
  cout<<tot<<endl;
}