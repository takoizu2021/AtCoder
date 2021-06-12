#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin>>n;
  vector<ll> x(n);
  
  rep(i,n) cin>>x[i];
  
  ll yy=0;
  ll m=0; double y=0; ll c=0;
  for(int i=0; i<n; i++) {
    m += abs(x[i]);
    yy += abs(x[i])*abs(x[i]);
    c = max(c,abs(x[i]));
  }
  y = sqrt(yy);
  cout << fixed << setprecision(9);
  cout<<m<<endl<<y<<endl<<c<<endl;
}  