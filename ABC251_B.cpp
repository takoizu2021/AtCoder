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
  int n,w;
  cin>>n>>w;
  vector<int> a(n);
  rep(i,n) cin>>a[i];
  
  vector<bool> ct(w+1,true);
  
  rep(i,n) {
    if(w >= a[i] && ct[a[i]]) {
      ct[a[i]] = false;
    }
      rep2(j,i+1,n) {
        if(w >= a[i]+a[j] && ct[a[i]+a[j]]) {
          ct[a[i]+a[j]] = false;
        }
        rep2(k,j+1,n) {
          if(w >= a[i]+a[j]+a[k] && ct[a[i]+a[j]+a[k]]) {
            ct[a[i]+a[j]+a[k]] = false;
          }
        }
      }
    }
  
  int ans=0;
  rep(i,w+1) if(ct[i]==false) ans++;
  
  cout<<ans<<endl;
}