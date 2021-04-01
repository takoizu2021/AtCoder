#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  ll ans=0;
  ll l0 =2;
  ll l1 =1;
  if(n == 1) cout<<"1"<<endl;
  else {
    rep2(i,2,n+1) {
      ans=l0+l1;
      l0 = l1;
      l1 = ans;
      //cout<< i <<" "<<ans<<endl;
    }
    cout<<ans<<endl;
  }

}