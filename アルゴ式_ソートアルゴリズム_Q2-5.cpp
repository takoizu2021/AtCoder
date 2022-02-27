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
	sort(b.rbegin(), b.rend());

    //b�̏d�����폜
    b.erase(unique(b.begin(), b.end()), b.end());

    //for(auto v : b) cout<<v<<":";

    // B �̊e�v�f�����Ԗڂ���A�z�z��ɋ��߂Ă���
    map<int,int> order;
    for(int i=0; i<b.size(); ++i) {
        order[b[i]] = i;
    }

    // �Ă� A �̊e�v�f�̏��ʂ����߂Ă���
    for(auto A:a) cout<<order[A]<<endl;

	return 0;
}