#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
const int mod=998244353;
using ll = long long;
//Å‘åŒö–ñ” gcd(A,B)

int main() {
  int n,k;
  cin>>n>>k;
  
  vector<int> a(n),b(k);
  rep(i,n) cin>>a[i];
  rep(i,k) cin>>b[i];
  
  int mx = 0;
  rep(i,n) if(mx <= a[i]) mx = a[i];
  
  string ans = "No";
  rep(i,n) {
    if(mx == a[i]) {
      rep(j,k) {
        if(i+1==b[j]) ans = "Yes";
      }
    }
  }
  
  cout<<ans<<endl;
}