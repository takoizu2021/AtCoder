#include <bits/stdc++.h>
using namespace std;

int main() {
  string s,p;
  cin>>s>>p;
  
  int n=s.size();
  bool ans = false;
  for(int i=0; i<n; i++) {
    if(s.find(p) != string::npos) {
      cout<<"Yes"<<endl;
      ans = true;
      break;
    }
    else {
      s += s[0];
      s.erase(0,1);
    }
  }
  if(ans == false) {
    cout<<"No"<<endl;
  }
}