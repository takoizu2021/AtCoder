#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	rep(i,n) cin>>a[i];

    //a���R�s�[����b������
    vector b = a;

    //b�������Ń\�[�g
	sort(b.begin(), b.end());

    //b�̏d�����폜
    b.erase(unique(b.begin(), b.end()), b.end());

    //for(auto v : b) cout<<v<<":";

    // ���W���k�������ʂ����߂�(lower_bound���g��)
    // ��lower_bound : �l�� a[i] �ɂȂ�悤�Ȕz�� B ���
    //   �C�e���[�^��Ԃ��������s���Ă��܂��B
    //   ���ꂩ�� B �̐擪�̃C�e���[�^��Ԃ� B.begin() ���������ƂŁA
    //   �ua[i] �� B �̒��ŉ��Ԗڂ̗v�f�ɑ������邩�v�����߂��܂��B
    int na = a.size();
    vector<int> res(na);
    for(int i=0; i<na; ++i) {
      res[i] = lower_bound(b.begin(), b.end(), a[i]) -b.begin();
    }

    for(auto v:res) cout<<v<<endl;

	return 0;
}