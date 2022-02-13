#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;
//Å‘åŒö–ñ” gcd(A,B)

int main() {
  int n,m;
  cin>>n>>m;
  vector<int> g(n+1);
  
  rep(i,m) {
    int a,b;
    cin>>a>>b;
    if(a>b) g[a]++;
    else  g[b]++;
  }
  int ans=0;
  rep2(i,1,n+1) {
    if(g[i]==1) ++ans;
  }
  
  cout<<ans<<endl;  
}