#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  string a,b;
  cin>>a>>b;
  
  reverse(b.begin(),b.end());
  
  string ans = "NO";
  if(a == b) ans = "YES";
  cout<<ans<<endl;
}