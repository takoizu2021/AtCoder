#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  char x,y;
  cin>>x>>y;
  
  string ans = "=";
  if(x < y) ans = "<";
  else if(x > y) ans = ">";
  
  cout<<ans<<endl;  
}