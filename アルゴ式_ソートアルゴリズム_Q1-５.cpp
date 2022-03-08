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

vector<int> quick (vector<int> a) {
	//�x�[�X�P�[�X
	if(a.empty()) return a;
	
	//0 �ȏ� N?1 �ȉ��̐��� X �𖳍�ׂɑI�сA A[X] �����Ƃ��ă\�[�g���s���B
    //1.��̔z�� L,R ��p�ӂ��A���̑���� i=0,1,?,N?1 �ɂ��čs���B 
	int n = a.size();
	vector<int> l,r;

    //0~n-1�͈͎̔w�藐������
    random_device rnd;  // �񌈒�I�ȗ���������𐶐�
    mt19937_64 mt(rnd());   //�����Z���k�E�c�C�X�^��32�r�b�g�ŁA�����͏����V�[�h�l
    uniform_int_distribution<> rand100 (0,n-1);  //[0, 99] �͈͂̈�l����
    int x = rand100(mt);
	rep(i,n) {
	  //1-1.i=X �Ȃ�Ή����s��Ȃ��B
	  //1-2.i!=X ���� A[i]<A[X] �Ȃ�� A[i] �� L �̖����ɒǉ�����B
	  if(i!=x && a[i]<a[x]) l.push_back(a[i]);
	  //1-3.i!=X ���� A[i]>A[X] �Ȃ�� A[i] �� R �̖����ɒǉ�����B
	  if(i!=x && a[i]>a[x]) r.push_back(a[i]);
      //i-4.i!=X ���� A[i]=A[X] �Ȃ�� A[i] �� L,R �̂ǂ��炩�̖����Ƀ����_���ɒǉ�����B
      if(i!=x && a[i]==a[x]) {
        uniform_int_distribution<> coin (0,1); //[0, 1] �͈͂̈�l����
        if(coin(mt)) l.push_back(a[i]);
        else r.push_back(a[i]);
      }

	}
	//2.L,R ���N�C�b�N�\�[�g��p���čċA�I�Ƀ\�[�g����B��z��̏ꍇ�͉����s��Ȃ��B
	l = quick(l);
	r = quick(r);

	//3.L �̗v�f, A[X], R �̗v�f�����̏��ɂȂ��Ăł���z����o�͂���B    
	l.push_back(a[x]);
	l.insert(l.end(), r.begin(), r.end());
	return l;
}

int main() {
    int n;
    cin>>n;
	vector<int> a(n);
    rep(i,n) cin>>a[i];

	a = quick(a);
    
	pri(n,a);	
	return 0;
}