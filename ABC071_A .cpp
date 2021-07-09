#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int x,a,b;
  cin>>x>>a>>b;
  
  string ans="A";
  if(abs(x-a)>abs(x-b)) ans = "B";
  
  cout<<ans<<endl;  
}