#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  
  int r,c; // r�s�Ac��
  cin >> r >> c;
  
  //�񎟌��z���錾
  vector<int> gyou(r + 1);
  vector<vector<int> > hyou(c + 1,gyou);
  
  int sum_r = 0; // r�s�̍��v
  int sum_c = 0; // c��̍��v

  //�\�Ƀf�[�^���́A�o��
  rep(i, r + 1) {
    rep(j, c + 1) {
      
      //�s���Ō���܂ł͉������s
      if(i != r) {
        //��̗v�f����́A�o�́A���v            
        if(j != c) {
          cin >> hyou[i][j];        
          cout << hyou[i][j] << " ";
          sum_c += hyou[i][j];
        }
        //�񂪍Ō����c�܂ŗ����獇�v����́A�o�́A���������ĉ��s
        else if(j == c) {
          hyou[i][j] = sum_c;
          cout << hyou[i][j] << endl;
          sum_c = 0;
        }
      }
      
      //�s���Ō����r�܂ŗ�����e�Ƃ̍��v���v�Z�A�o�́A������
      else if(i == r) {
        rep(k, r + 1) {
            sum_r += hyou[k][j]; 
          }
        if(j != c) {          
          cout << sum_r << " ";
          sum_r = 0;
        }
        else if(j == c) {
          cout << sum_r << endl;
          sum_r = 0;
        }      
      }

    }
  }
  
}
