#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  
  int n,x;
  cin >> n >> x;  
  vector<int> pan(n);
  
  int sumpan = 0; //N��ފe�P�Â̍��v����sump
  int sum = n; //������h�[�i�c�̐��A�e�P��ނ͍��̂ŏ����ln
  
  //in
  rep(i,n) {
    cin >> pan[i];
    sumpan += pan[i]; //N��ފe�P�Â̍��v����sump�Z
  }
    
  x -= sumpan; //N��ވ�Â͍��̂ŁA�����ʂ���sump������
  
  //�ł����̎g�p�ʂ����Ȃ��h�[�i�c��sort�֐��ŒT���B
  sort(pan.begin(), pan.end());

  //1��ނÂ�����c��x����A�ł����̎g�p�ʂ����Ȃ��h�[�i�c������Ă���
  while(1) {
    if(x < pan[0] ) {
      break;
    }    
    x -= pan[0];
    sum ++;   
  }
  
  cout << sum << endl;
  
}
