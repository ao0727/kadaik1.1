#include "kazuate.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playKazuateGame() {
    srand(time(0)); // ��������

    int secretNumber = rand() % 100 + 1; // 1����100�܂ł̗����𐶐�
    int guess;
    int attempts = 0;

    cout << "1����100�܂ł̐��𓖂ĂĂ��������B\n";

    while (true) {
        cout << "�\�z�����������: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "�����Ƒ傫�Ȑ��ł��B\n";
        }
        else if (guess > secretNumber) {
            cout << "�����Ə����Ȑ��ł��B\n";
        }
        else {
            cout << "�����ł��I" << secretNumber << "�������ŁA" << attempts << "��ڂ̗\�z�œ�����܂����B\n";
            break;
        }
    }
}
