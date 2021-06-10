#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,x;
  cin>>n>>x;  
  string s;
  cin>>s;
  
  rep(i,n) {
    if(s[i] == 'o') x += 1;
    else x -= 1;
    if(x <= 0) x = 0;
  }
  cout<<x<<endl;
}