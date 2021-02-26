#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  
  //string型に変更して各桁の数値を取る。
  string str = to_string(n);
  int sum = 0;
  rep(i,str.size()) {
    sum += str[i] - '0';
  }
  
  if(n % sum == 0) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  
}