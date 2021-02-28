#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  char a;
  cin >> a;
  
  if(a == 'O'||
     a == 'P'||
     a == 'K'||
     a == 'L'  ) {
    cout << "Right" << endl;
  }
  else {
    cout << "Left" << endl;
  }
}