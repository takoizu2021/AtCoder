#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  
  //int abmx = min(a,(min(b,c))), mn = min()
  int ac = max(a,c) - min(a,c);
  int ab = max(a,b) - min(a,b);
  int bc = max(b,c) - min(b,c);
  string ans = "No";
  if(ac <= d || (ab<=d&&bc<=d)) ans = "Yes";
  
  cout<<ans<<endl;
}