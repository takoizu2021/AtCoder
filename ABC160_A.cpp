#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  string ans = "No";
  if(s[2]==s[3]&&s[4]==s[5]) ans = "Yes";
  
  cout<<ans<<endl;  
}