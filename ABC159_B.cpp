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
  //�񕪂�
  string sr = s;
  reverse(sr.begin(),sr.end());
  if(s == sr) {
    //(N?1)/2 �����ڂ܂�(���[�܂�)����Ȃ镶����͉�
    int n = s.size();
    string sh = s.substr(0,(n-1)/2);
    string shr = sh;
    reverse(shr.begin(),shr.end());
    if(sh == shr) {
      //S �� (N+3)/2 �����ڂ��� N �����ڂ܂�(���[�܂�)����Ȃ镶����͉񕶂ł���B
      string sn = s.substr((n+3)/2-1,n-1);
      string snr = sn;
      reverse(snr.begin(),snr.end());
      if(sn == snr) ans = "Yes";
    }
  }
  cout<<ans<<endl;
}