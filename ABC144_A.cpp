#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  int a,b;
  cin>>a>>b;
  
  int ans = -1;
  if(a < 10&&b < 10) ans = a*b;
  
  cout<<ans<<endl;
}