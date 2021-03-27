#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int m,h;
  
  while(cin) {
    cin>>s;
    if(s == "-") {
      break;
    }
    cin>>m;
    for(int i=0;i<m;i++) {
      cin>>h;
      s += s.substr(0,h);
      s.erase(0,h);
    }
    cout<<s<<endl;
  }
}