#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

//int num = atoi(str.c_str());    string�^��int�^�ɕϊ�����
//string str = to_string(num);   int�^��string�^�ɕϊ�����

int main() {
  
  int n;
  cin >> n;
    
  vector<int> ichi(n);
  vector<vector<int> > data(3,ichi);
  
  //in
  rep(i,3) {
    rep(j,n) {
      cin >> data[i][j];
    }
  }
  //�����xsum
  int sum = 0;
  //�������̖̂����x��sum
  rep(i,n) {
    sum += data[1][i];
  }
  //i�Ԗڂ�i-1�Ԗڂ̗����Ȃ�Ai-1�Ԗڂ̗����̒ǉ������x��sum
  rep(i,n) {
    if(i > 0) {    
      if(data[0][i] == data[0][i-1] + 1) {
        sum += data[2][data[0][i-1] - 1];
      }
    } 
  }
  
  cout << sum << endl;
    
}

