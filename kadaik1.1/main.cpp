#include <iostream>
using namespace std;

#include "janken.h"
#include "kazuate.h" // �����ăQ�[���̃w�b�_���C���N���[�h

int main() {
    int choice;

    while (true) {
        cout << "�I�����Ă�������:\n";
        cout << "1. ����񂯂�Q�[��\n";
        cout << "2. �����ăQ�[��\n";
        cout << "3. �I��\n";
        cin >> choice;

        switch (choice) {
        case 1:
            playJankenGame(); // ����񂯂�Q�[�����Ăяo��
            break;
        case 2:
            playKazuateGame(); // �����ăQ�[�����Ăяo��
            break;
        case 3:
            cout << "�Q�[�����I�����܂��B\n";
            return 0;
        default:
            cout << "�����ȑI���ł��B�ēx�I�����Ă��������B\n";
            break;
        }
    }

    return 0;
}