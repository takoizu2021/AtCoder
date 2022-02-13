#define _GLIBCXX_DEBUG
#include bitsstdc++.h
using namespace std;
#define rep(i, n) for (int i = 0; i  (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i  (int)(n); i++)
#define all(v) v.begin(), v.end()
#include cmath
const int inf=1000000000; 10^9
using ll = long long;
Å‘åŒö–ñ” gcd(A,B)

int main() {
  int n,p,q;
  cinnpq;
  vectorll a(n);
  rep(i,n) cina[i];
  
  int ans=0;
  for(int i=0; in; ++i) {
    for(int j=0; ji; ++j) {
      for(int k=0; kj; ++k) {
        for(int l=0; lk; ++l) {
          for(int m=0; ml; ++m) {
            if(a[i]a[j]%pa[k]%pa[l]%pa[m]%p == q) ans++;
          }
        }
      }
    }
  }
  
  coutansendl;
}