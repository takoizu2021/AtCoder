#include <bits/stdc++.h>
using namespace std;

int main() {
  string s,w;
  cin>>s;
  
  int ct = 0;
  while(cin) {
    cin>>w;
    if("END_OF_TEXT" == w) {
      break;
    }
    for(int i=0;i<w.size();i++) {
      if(65 <= w[i]  && w[i] <= 90 ) {
        w[i] += 32;
      }
    }
    if(s == w) {
      ++ct;
    }
  }
  cout<<ct<<endl;
}