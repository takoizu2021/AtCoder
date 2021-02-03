#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int a,b,c;
  cin >> a >> b >> c;
  int ct = 0;
  
 for(int i = a; i <= b; i++) {   
   if (c % a == 0) {
     ct++;
   }
   a++;
 }
 cout << ct << endl;
    
}
