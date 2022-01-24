#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

// �O���t��\���f�[�^�\��
using G = vector<vector<int> >;

// ���_ v �����Ƃ��镔���؂�T��
// p := ���_ v �̐e
// depth[v] := ���_ v �̐[��
// chs[v] := ���_ v �̎q���_�̃��X�g
void rec (int v, int p, vector<int> &depth,
          vector<vector<int> > &chs) {

    // ���_ v �̐[�������߂�
    if(v == 0) {
        // ���̏ꍇ
        depth[v] = 0;
    }
    else {
        // ���ȊO�̏ꍇ�͐e���_�̐[�� + 1
        depth[v] = depth[p] + 1;
    }

    // ���_ v �̊e�q���_��T��
    for(auto ch : chs[v]) {
        // �q���_ ch �����Ƃ��������؂��ċA�I�ɒT��
        // �q���_ ch �̐e�� v �ł���
        rec(ch, v, depth, chs);
    }
}


int main() {
    int n;
    cin>>n;
    vector<vector<int> > chs(n);
    for(int v=1; v<n; ++v) {
        int p;
        cin>>p;

        chs[p].push_back(v);
    }

    // �����_ (0) ����ċA�I�ɒT������
    // �����_ 0 �̐e�͕֋X�I�� -1 �Ƃ���
    vector<int> depth (n,0);
    rec(0,-1,depth,chs);

    int res=0;
    for(auto d : depth) res = max(res,d);
    cout<<res<<endl;

	return 0;
}