#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

// ���_ v �����Ƃ��镔���؂�T��
// p := ���_ v �̐e
// siz[v] := ���_ v �����Ƃ��镔���؂̃T�C�Y
// chs[v] := ���_ v �̎q���_�̃��X�g
void rec(int v, int p, vector<int> &siz,
         vector<vector<int> > &chs) {
     // ���_ v �̊e�q���_��T��
     for (auto ch : chs[v]) {
        // �q���_ ch �����Ƃ��������؂��ċA�I�ɒT��
        // �q���_ ch �̐e�� v �ł���
        rec(ch, v, siz, chs);
     }

    // �A�肪�����ɓ��������Z����
    siz[v] = 1;
    for (auto ch : chs[v]) {
        siz[v] += siz[ch];
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
    vector<int> siz(n,0);
    rec(0,-1,siz,chs);

	for(auto s : siz) cout << s -1 <<endl;
	return 0;
}