#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  string n;
  cin>>n;
  
  string ans = "No";
  int chk = n.find("9");
  if(chk != -1) ans = "Yes";
  
  cout<<ans<<endl;
}