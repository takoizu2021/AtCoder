#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int n,l;
  cin >> n >> l;
  
  int count = 0;
  int c = 1;
  char a;
  rep(i,n) {
    cin >> a;
    if(a == '+') {
      c++;
    }
    else if(a == '-') {
      c--;
    }
    if(c > l) {
      c = 1;
      count++;
    }
  }
  cout << count  << endl;
 
}