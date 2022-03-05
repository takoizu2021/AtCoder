#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;
//Å‘åŒö–ñ” gcd(A,B)

int main() {
  double a,b,c,x;
  cin>>a>>b>>c>>x;
   
  double ans;
  if(a>=x) ans=1;
  else if(a+1<=x&&x<=b) ans=c/(b-a);
  else ans=0;
  
  cout << fixed << setprecision(10);
  cout<<ans<<endl;
}