#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,d,x;
  cin >>n>>d>>x;
  
  int a;
  int ans=0;
  int da=d-1;
  rep(i,n) {
    cin>>a;
    ans += da/a+1;
  }
  cout<<ans+x<<endl;
}