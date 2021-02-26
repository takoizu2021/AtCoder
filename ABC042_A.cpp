#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  
  vector<int> vec(3);
  vec[0] = a;
  vec[1] = b;
  vec[2] = c;
 
  sort(vec.begin(), vec.end());
  if(vec[0] == 5 && vec[1] == 5 && vec[2] == 7) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}