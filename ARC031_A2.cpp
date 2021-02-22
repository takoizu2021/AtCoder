#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
 string n;
 cin >> n;

 string nr = n;  
 reverse(nr.begin(),nr.end());
  
  if(n == nr) {
    cout << "YES" << endl; 
  }
  else {
    cout << "NO" << endl; 
  }
 
}