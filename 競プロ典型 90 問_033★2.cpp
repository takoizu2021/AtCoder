#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;
//�ő���� gcd(A,B)

int main() {
  int h,w;
  cin>>h>>w;
  
  int ans;
  //h�܂���w��1�̏ꍇ�A2*2�̃P�[�X���Ȃ��̂ŁA�A�����ē_�����Ă��K�؂ɂȂ�B�R�[�i�[�P�[�X
  if(h==1||w==1) ans=h*w;
  //h+1,w+1�͊�������ꍇ�ɏc����2�Âg���Ƃ����ꍇ�̂��܂�1���E����悤�ɋ����ɒ����Ă���B
  //�����������ꍇ��2�Âg���Ƃ��Ă����܂肪�E���Ȃ��̂ŉe�����Ȃ��B
  else ans = ((h+1)/2)*((w+1)/2); 
  cout<<ans<<endl;
}