#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n,q;
  cin>>n>>q;
  
  vector<int> v(n);
  int l,r,t;
  rep(i,q) {
    cin>>l>>r>>t;
    l--; r--;
    for(int j=l; j<=r; j++) {
      v[j] = t;
    }    
  }
  rep(i,n) cout<<v[i]<<endl;
}