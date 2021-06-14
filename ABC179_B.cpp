#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  int d1,d2;
  int ct=0;
  //bool zen = false;
  string ans = "No";
  
  rep(i,n) {
    cin>>d1>>d2;
    if(d1==d2) {
      ct++;
      if(ct >= 3) {
        ans = "Yes";
        break;
      }
    }
    else ct = 0;
  }
  cout<<ans<<endl;
}