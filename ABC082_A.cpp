#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

//int num = atoi(str.c_str());    string�^��int�^�ɕϊ�����
//string str = to_string(num);   int�^��string�^�ɕϊ�����

int main() {
  int a,b;
  cin >> a >> b;
  int x = a + b;
  if( x % 2 == 1 ) {
    x++;
  }
  
  cout << x / 2 << endl;
  
}
