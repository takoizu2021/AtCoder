#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin >> n;
  
  //x in
  vector<int> vec(101);
  int x; int mini = 101;  int maxm = 0;
  rep(i, n) {
    cin >> x;
    ++vec[x];
    mini = min(mini,x);
    maxm = max(maxm,x);
  }
  
  //����̗͂��v�Z
  int h = 0; //���Wp���Ƃ�n�l���v�̏���̗�  
  int ans = 100100100; //�Sh�̍��v�ŏ�����̗�
  for(int i = mini; i <= maxm; i++) { //x�̍ŏ��l����ő�l�܂ł̊Ԃ����[�v����
    for(int j = mini; j <= maxm; j++) {
      if(vec[j] != 0) {
        h += (j - i) * (j - i) * vec[j];�@//vec[j]�͓������W�̐l�����v�Z
      }
    }
    ans = min(ans,h);
    h = 0;
  }
  
  cout << ans << endl;
}