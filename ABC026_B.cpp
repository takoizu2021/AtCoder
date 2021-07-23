#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<double> r(n);
  rep(i,n) {
    cin>>r[i];
    r[i] = r[i]*r[i];    
  }
  sort(r.begin(),r.end());
  reverse(r.begin(),r.end());
  
  double sum=0;
  rep(i,n) {
    if(i%2!=0) r[i] *= -1;
    sum += r[i];
  }
  sum *= M_PI;
  cout<<fixed<<setprecision(10);
  cout<<sum<<endl;
}