#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  ll r,d,x;
  cin>>r>>d>>x;
  
  ll ans = r*x-d;
  rep(i,10) {
    cout<<ans<<endl;
    x = ans;
    ans = r*ans-d;
  }
  
  
}