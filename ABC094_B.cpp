#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,m,x;
  cin>>n>>m>>x;
  
  vector<int> masu(n+1);
  rep(i,m) {
    int mi;
    cin>>mi;
    masu[mi] = 1;
  }
  
  int g=0;
  for(int i=x; i<=n; i++) {
    g += masu[i]; 
  }
  
  int s=0;
  for(int i=x; i>=0; i--) {
    s += masu[i];
  }
  
  int ans = min(s,g);
  cout<<ans<<endl;
}