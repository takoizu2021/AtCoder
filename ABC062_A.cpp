#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

//int num = atoi(str.c_str());    stringŒ^‚ðintŒ^‚É•ÏŠ·‚·‚é
//string str = to_string(num);   intŒ^‚ðstringŒ^‚É•ÏŠ·‚·‚é

int main() {
  int x,y;
  cin >> x >> y;
  
  vector<int> g1 = {1,3,5,7,8,10,12};
  vector<int> g2 = {4,6,9,11};
  
  int count = 0;
  
  rep(i,7){
    if(x == g1[i]) {
      for(int j = i + 1; j < 7; j++) {
        if(y == g1[j]) {
          count++;
        }
      }
    }
  }
    
  rep(i,4){
    if(x == g2[i]) {
      for(int j = i + 1; j < 7; j++) {
        if(y == g2[j]) {
          count++;
        }
      }
    }
  }
  
  if(count) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

    
}
