#include <bits/stdc++.h>
using namespace std;

// x�Ԃ̑g�D�ɂ��āA�q�g�D����̕񍐏���������������Ԃ�
// children�͑g�D�̊֌W��\��2�����z��(�Q�Ɠn��)
int complete_time(vector<vector<int>> &children, int x) {
  // (�����ɒǋL���čċA�֐�����������)
  // �x�[�X�P�[�X
  if(children.at(x).size() == 0) {
    return 0; //�q�g�D�������悤�ȑg�D�ɂ��āA�񍐏�������������0
  }
    
  //�ċN�X�e�b�v
  int max_receive_time = 0; //�󂯎���������̍ő�l
  //x�Ԃ̑g�D�̎q�g�D�ɂ��ă��[�v
  for (int c : children.at(x)) {
    
    //(�q�g�Dc�̂��Ƃɑ���������+1)�̎�����c����̕񍐏����󂯎��
    int receive_time = complete_time(children,c)+1;
    
    //�󂯎���������̍ő�l = �����������Ȃ̂ōő�l�����߂�
    max_receive_time = max(max_receive_time,receive_time); 
  }
  return max_receive_time;
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
