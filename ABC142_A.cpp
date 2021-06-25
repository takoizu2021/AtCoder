#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  int ct=0;  
  rep2(i,1,n+1) if(i%2!=0) ct++;
  
  double ans = 1.0*ct/n;
  
  cout << fixed << setprecision(6);
  cout<<ans<<endl;
}