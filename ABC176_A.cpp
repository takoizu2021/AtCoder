#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;

int main() {
  int n,x,t;
  cin>>n>>x>>t;
  
  if((n%x) > 0) {
    cout<<(n/x+1)*t<<endl;;
  }
  else {
    cout<<(n/x)*t<<endl;
  }
}