#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;

int main() {
  int n,k;
  cin>>n>>k;
  
  vector<int> snk(n);
  rep(i,n) {
    cin>>snk[i];
  }
  sort(snk.begin(),snk.end());
  
  int sum=0;
  rep(i,k) {
    sum += snk[n-1-i];
  }
  cout<<sum<<endl;
}