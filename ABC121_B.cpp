#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  
  int n,m,c;
  cin >> n >> m >> c;
  
  vector<int> vec_m(m);
  vector<vector<int>> vec_nm(n + 1,vec_m);
  
  //in
  rep(i,n + 1) {
    rep(j,m) {
      cin >> vec_nm[i][j];
    }
  }
  
  //�e�R�[�h���������Ă��邩�v�Z
  int sum = 0; //���������\�[�X�̐�
  int sum_kei = 0; //�e�\�[�X�̌v�Z����
  
  rep2(i,1,n + 1) {
    rep(j,m) {
      sum_kei += ( ( vec_nm[0][j] ) * ( vec_nm[i][j] ) );
    }
    sum_kei += c;
    if( sum_kei > 0 ) {
     sum ++;
    }
    sum_kei = 0;
  }
  
  cout << sum << endl;
}
