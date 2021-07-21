#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int a,b,n;
  cin>>a>>b>>n;
  
  int ans=n;
  while(n>0) {
    if(n%a==0 && n%b==0) {
      ans = n;
      break;
    }
    n++;
  }
  cout<<ans<<endl;
}