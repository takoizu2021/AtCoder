#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  
  string s;
  cin >> s;
  
  char moji;
  int a;
  int count = 0;
  
  rep(i,s.size()) {
    if(i == 0 || i % 2 == 0) {
      int a = s[i];
      if(a < 97) { //������ڂɏ�����<97�@�łȂ��@�����������
        count++; 
      }
    }
  
    else if(i % 2 != 0) {
      int a = s[i];
      if(a >= 97) { //���������ڂɑ啶��>=97�@�łȂ��@�����������
        count++; 
      }
    }
  }
  
  if(count > 0) {
    cout << "No" << endl;
  }
  else {
    cout << "Yes" << endl;
  }
  
  
}
