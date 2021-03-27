#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  int q;
  cin>>str>>q;
  
  string s,p;
  int a,b;
  for(int i=0;i<q;i++) {
    cin>>s;
    if(s == "print") {
      cin>>a>>b;
      b+=1;
      cout<< str.substr(a,b-a) <<endl;
    }
    if(s == "reverse") {
      cin>>a>>b;
      b+=1;
      string rev = str.substr(a,b-a);
      reverse(rev.begin(), rev.end());
      str.replace(a,b-a,rev);
    }
    if(s == "replace") {
      cin>>a>>b>>p;
      b+=1;
      str.replace(a,b-a,p);
    }
  }
}