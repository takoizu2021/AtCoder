#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  int ma=-1;
  int mi=1001;
  
  int a;
  rep(i,n) {
    cin>>a;
    ma=max(ma,a);
    mi=min(mi,a);
  }
  cout<<ma-mi<<endl;
}