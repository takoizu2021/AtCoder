#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

void bubble(int n, vector<int> &a) {
    
    bool chk=true;

    while(chk) { //4 1.に戻る。
      //フラグをfalseにする。
      chk = false;
      
      //1.もし A[i]>A[i+1] ならば、A[i] と A[i+1] を交換してフラグをtrue。
      for(int i=0; i<n-1; ++i) {
        if(a[i]>a[i+1]) {
            swap(a[i],a[i+1]);
            chk=true;
        }
      }
      
      //2.1.において一度も要素が交換されなかった場合、処理を終了する。
      if(!chk) return;
      
      //3.A の各要素を空白区切りで出力する。
      for(int i=0; i<n; ++i) {
        cout<<a[i]<<" ";
        if(i==n-1) cout<<endl;
      }
    }    
    return;
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    bubble(n,a);

	return 0;
}