#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int h,w;
  cin >> h >> w;
  
  //��w,�ch�̔z��
  vector<int> vec(w);
  vector<vector<int> > masu(h,vec);
  //�h��Ԃ����}�X�̃J�E���g
  int ct = 0;
  //���΂ߏ�̂P�}�X������h��Ԃ�
  rep(i,h) {
    rep2(j,1,w) {
      ct++;
    }
  }
  //���΂ߏ�̂P�}�X������h��Ԃ�
  rep2(i,1,h) {
    rep(j,w) {
      ct++;
    }
  }  
  cout << ct << endl;
}