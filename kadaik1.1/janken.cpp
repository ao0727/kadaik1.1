// janken.cpp

#include "janken.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//PL�̎�������_���ɑI��
int getComputerChoice() {
    return rand() % 3 + 1; // 1: �O�[, 2: �`���L, 3: �p�[
}

// ����񂯂�̌���
void determineWinner(int playerChoice, int computerChoice) {
    cout << "PL�̑I��: ";
    switch (playerChoice) {
    case 1:
        cout << "�O�[";
        break;
    case 2:
        cout << "�`���L";
        break;
    case 3:
        cout << "�p�[";
        break;
    }
    cout << endl;

    cout << "CPU�̑I��: ";
    switch (computerChoice) {
    case 1:
        cout << "�O�[";
        break;
    case 2:
        cout << "�`���L";
        break;
    case 3:
        cout << "�p�[";
        break;
    }
    cout << endl;

    if (playerChoice == computerChoice) {
        cout << "���������ł��I\n";
    }
    else if ((playerChoice == 1 && computerChoice == 2) || (playerChoice == 2 && computerChoice == 3) || (playerChoice == 3 && computerChoice == 1)) {
        cout << "PL�̏����ł��I\n";
    }
    else {
        cout << "CPU�̏����ł��I\n";
    }
}

// ����񂯂�Q�[�����v���C
void playJankenGame() {
    srand(time(0)); 

    int playerChoice;
    int computerChoice;

    while (true) {
        cout << "����񂯂�����܂��I\n";
        cout << "1. �O�[\n";
        cout << "2. �`���L\n";
        cout << "3. �p�[\n";
        cout << "4. �I��\n";
        cout << "�I�����Ă��������i1-4�j: ";
        cin >> playerChoice;

        if (playerChoice == 4) {
            break; // �Q�[�����I��
        }

        if (playerChoice < 1 || playerChoice > 3) {
            cout << "�����ȑI���Bn";
            continue;
        }

        computerChoice = getComputerChoice();
        determineWinner(playerChoice, computerChoice);
    }

    cout << "�Q�[�����I�����܂��B\n";
}
