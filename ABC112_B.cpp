#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;

int main() {
  int n,t;
  cin>>n>>t;
  
  int c,ti;
  int ans = 1001;
  rep(i,n) {
    cin>>c>>ti;
    if(t >= ti) {
      ans = min(ans,c);
    }
  }
  if(ans == 1001) {
    cout<<"TLE"<<endl;
  }
  else {
    cout<<ans<<endl;
  }
}