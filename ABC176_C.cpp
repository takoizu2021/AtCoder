#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<ll> a(n);
  for(int i=0;i<n;++i) {
    cin>>a[i];    
  }
  ll sam = 0;
  for(int i=1;i<n;++i) {
    if(a[i-1] > a[i]) {
      sam += a[i-1]-a[i];
      a[i] = a[i-1];
    }
  }
  cout<<sam<<endl;  
}