#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b;
  cin >>a>>b;
  
  if(a == 1) a += 13;
  if(b == 1) b += 13;
  
  if     (a > b) cout<<"Alice"<<endl;
  else if(a < b) cout<<"Bob"<<endl;
  else cout<<"Draw"<<endl;
}