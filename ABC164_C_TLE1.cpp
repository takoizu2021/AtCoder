#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  
  int n;
  cin >> n;
  
  vector<string> kaisu(n);
  vector<vector<string> > keihin(2,kaisu);
  
  //in
  rep(i,n) {
    cin >> keihin[0][i];
  }
  
  //�擪���炻�̂��Ƃ̗v�f�ɓ������̂����邩���肵�āA�����Ȃ�2�s�ڂɁuonaji�v������
  rep(i,n) {
    rep2(j,i + 1,n) {
      if( keihin[1][j] == "") {
        if( keihin[0][i] == keihin[0][j] ) {
          keihin[1][j] = "onaji";
        }
      }
    }
  }
  
  //�����łȂ����̂�count����B
  int count = 0;
  rep(i, n) {
    if( keihin[1][i] == "" ) {
      count ++;
    }
  }
  
  cout << count << endl;
  
}
