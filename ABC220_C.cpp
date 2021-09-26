#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000;
using ll = long long;

int main() {
  int n;
  cin>>n;
  vector<int> a(n);
  ll sum=0;
  for(int i=0; i<n; ++i) {
    cin>>a[i];
    sum +=a[i];
  }
  ll x;
  cin>>x;
  ll k=x/sum*n;
  x = x-x/sum*sum;
  
  int ct=0;
  while(x>=0) {
    x -= a[ct];
    ct++;
  }
  k += ct;
    
  cout<<k<<endl;  
}