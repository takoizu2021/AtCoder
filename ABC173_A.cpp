#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //���w�֐�
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  int ans =0;
  rep(i,11) {
    if(i*1000>=n) {
      ans = i*1000-n;
      break;
    }
  }
  cout<<ans<<endl;
}