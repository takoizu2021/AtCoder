#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  int ct=0;
  rep(i,s.size()) if(s[i] == 'o') ct++;
  
  int ans = 700 + (ct*100);
  
  cout<<ans<<endl;
}