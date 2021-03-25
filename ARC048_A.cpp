#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;

int main() {
  int a,b;
  cin>>a>>b;
  int ans=b-a;
  if(a<0&&0<b) {
    ans -=1; 
  }
  cout<<ans<<endl;
}