#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

void bubble(int n, vector<int> &a) {
    
    bool chk=true;

    while(chk) { //4 1.�ɖ߂�B
      //�t���O��false�ɂ���B
      chk = false;
      
      //1.���� A[i]>A[i+1] �Ȃ�΁AA[i] �� A[i+1] ���������ăt���O��true�B
      for(int i=0; i<n-1; ++i) {
        if(a[i]>a[i+1]) {
            swap(a[i],a[i+1]);
            chk=true;
        }
      }
      
      //2.1.�ɂ����Ĉ�x���v�f����������Ȃ������ꍇ�A�������I������B
      if(!chk) return;
      
      //3.A �̊e�v�f���󔒋�؂�ŏo�͂���B
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