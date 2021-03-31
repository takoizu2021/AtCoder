#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string a,b;
  cin>>a>>b;
  
  string s = a+b;
  ll num = stol(s);
  string ans = "No";
  for(int i=1;i*i<=num;i++) {
    if(i*i == num) ans = "Yes";
  }
  cout<<ans<<endl;
}