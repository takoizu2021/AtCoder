#include <bits/stdc++.h>
using namespace std;

// x�Ԃ̑g�D�ɂ��āA�q�g�D����̕񍐏���������������Ԃ�
// children�͑g�D�̊֌W��\��2�����z��(�Q�Ɠn��)
int complete_time(vector<vector<int>> &children, int x) {
  // (�����ɒǋL���čċA�֐�����������)
  if(children[x].size() == 0) return 0;
  
  int max_re_time = 0;
  for(int c : children[x]) {
    int re_time = complete_time(children, c) + 1;
    
    max_re_time = max(max_re_time, re_time);
  }
  return max_re_time;
}

// ����ȍ~�̍s�͕ύX���Ȃ��Ă悢

int main() {
  int N;
  cin >> N;

  vector<int> p(N);  // �e�g�D�̐e�g�D�������z��
  p.at(0) = -1;  // 0�ԑg�D�̐e�g�D�͑��݂��Ȃ��̂�-1�����Ă���
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }

  // �g�D�̊֌W����2�����z������(�������Ȃ��Ă��悢)
  vector<vector<int>> children(N);  // ����g�D�̎q�g�D�̔ԍ��ꗗ  // N�~0�̓񎟌��z��
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);  // i�Ԃ̐e�g�D�̔ԍ�
    children.at(parent).push_back(i);  // parent�̎q�g�D�ꗗ��i�Ԃ�ǉ�
  }

  // 0�Ԃ̑g�D�̌��ɕ񍐏����������������߂�
  cout << complete_time(children, 0) << endl;
}
