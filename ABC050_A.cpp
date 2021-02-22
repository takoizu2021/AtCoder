#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
 int a,b;
 char o;
 cin >> a >> o >> b;
 if(o == '+') {
   cout << a + b << endl;
 }
 else {
   cout << a - b << endl;
 }
  
}