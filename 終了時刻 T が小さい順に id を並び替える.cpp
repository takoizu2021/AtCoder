    // �I������ T ������������ id ����ёւ���

    vector<int> ids(N);

    for (int i = 0; i < N; ++i) ids[i] = i;

    sort(ids.begin(), ids.end(), [&](int i, int j) {

        return T[i] < T[j];

    });