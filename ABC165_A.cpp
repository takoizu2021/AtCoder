#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int k,a,b;
  cin>>k>>a>>b;
  
  string ans = "NG";
  for(int i=a; i<=b; i++) {
    if(i % k == 0) {
      ans = "OK"; break;
    }
  }
  cout<<ans<<endl;
}