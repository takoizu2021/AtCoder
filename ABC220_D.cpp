#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000;
using ll = long long;

int main() {
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin>>a[i];
  
  //�cn�A��0~9�̓񎟌��z������ => ���肦�鑀��̐��𐔂���z��
  vector<vector<ll> >dp(n,vector<ll> (10,0));
  //�����l�Ƃ���dp[0][j]��j=a[0]��1�ɂ��� => 1�͍ŏ��ɂ��肦�鐔
  dp[0][a[0]]=1;
  
  for(int i=0; i<n-1; ++i) {
    for(int j=0; j<10; ++j) {
      //dp[i+1][j]�ɑ΂��āA���쐔��0�łȂ�dp[i][j]��a[i+1]����Z�Ɖ��Z�̏������������ʂ�
      //j��dp[i][j]�̑��쐔��ǉ����Ă����B
      if(dp[i][j]>0) dp[i+1][(j+a[i+1])%10] += (dp[i][j])%998244353;
      if(dp[i][j]>0) dp[i+1][(j*a[i+1])%10] += (dp[i][j])%998244353;      
    }
  }
  
  /*
  for(int i=0; i<n; ++i) {
    for(int j=0; j<10; ++j) {      
      cout<<dp[i][j]<<" ";
    }
    cout<<endl;
  }
  */
  
  //a�z��̍Ō�܂ł̑�����������쐔�̌��ʂɏ��Z����%998244353�����ďo�͂���
  for(int i=0; i<10; ++i) cout<<dp[n-1][i]%998244353<<endl;  
}