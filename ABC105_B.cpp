#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  int c=4, d=7;
  
  string ans = "No";
  if(4 <= n) {
    for(int i=0; i*c<=n; i++) {
      for(int j=0; j*d<=n; j++) {
        if(i*c + j*d == n) {
          ans = "Yes";
          break;
        }
        else if(i*c + j*d > n)continue;        
      }
    }    
  }
  cout<<ans<<endl;
}