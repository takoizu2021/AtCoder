#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

void pri(int n, vector<int> a) {
	rep(i,n) {
		cout<<a[i];
		if(i!=n-1) cout<<" ";
		else cout<<endl;
	}
	return;
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    //k=1,2,?,N?1 �ɂ��Ď��̏������s���B
    rep2(k,1,n) {
      //1.�ϐ� pos �� k ��������B
      int pos = k;
      //2.pos/=0 ���� A[pos?1]>A[pos] �̊Ԉȉ����J��Ԃ��B
      //  �Ȃ��A���̏������I���������_�� A[0],A[1],?,A[k] �͏����ɂȂ�B      
      while(pos!=0 && a[pos-1]> a[pos]) {
          //2-1.pos/=0 ���� A[pos?1]>A[pos] �̊Ԉȉ����J��Ԃ��B
          swap(a[pos-1],a[pos]);
          //2-2.pos �̒l�� 1 ���炷
          pos--;
      }

      pri(n,a);      
    }
	return 0;
}