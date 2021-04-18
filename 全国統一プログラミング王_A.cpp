#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,a,b;
  cin>>n>>a>>b;
  
  
  int ansma = min(a,b);
  int ansmi;
  if(a+b <= n) ansmi = 0;
  else ansmi = a+b -n;
  cout<<ansma<<" "<<ansmi<<endl;
}