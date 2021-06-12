#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n,x;
  cin>>n>>x;
  
  int v,p;
  int sum = 0;
  int ans = -1;
  rep(i,n) {
    cin>>v>>p;
    //cout<<v * p/100<<endl;
    sum += v*p;
    if(sum>x*100) {
      ans = i+1;
      break;
      }
  }
  cout<<ans<<endl;
}  