#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  int x,a,b;
  cin>>x>>a>>b;
  
  string ans;
  if(a>=b) ans="delicious";
  else if(x>=abs(a-b)) ans="safe";
  else ans="dangerous";
  
  cout<<ans<<endl;
}