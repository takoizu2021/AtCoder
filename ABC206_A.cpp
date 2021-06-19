#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  n *= 1.08;
  int x = 206; string ans = ":(";  
  if(n < x) ans = "Yay!";
  else if(n == x) ans = "so-so";
  cout<<ans<<endl;  
}