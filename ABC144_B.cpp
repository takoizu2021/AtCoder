#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  string ans = "No";
  rep2(i,1,10) if(n % i == 0 && n / i < 10) ans = "Yes";
  
  cout<<ans<<endl;
}