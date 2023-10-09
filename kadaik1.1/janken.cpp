// janken.cpp

#include "janken.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//PLの手をランダムに選択
int getComputerChoice() {
    return rand() % 3 + 1; // 1: グー, 2: チョキ, 3: パー
}

// じゃんけんの結果
void determineWinner(int playerChoice, int computerChoice) {
    cout << "PLの選択: ";
    switch (playerChoice) {
    case 1:
        cout << "グー";
        break;
    case 2:
        cout << "チョキ";
        break;
    case 3:
        cout << "パー";
        break;
    }
    cout << endl;

    cout << "CPUの選択: ";
    switch (computerChoice) {
    case 1:
        cout << "グー";
        break;
    case 2:
        cout << "チョキ";
        break;
    case 3:
        cout << "パー";
        break;
    }
    cout << endl;

    if (playerChoice == computerChoice) {
        cout << "引き分けです！\n";
    }
    else if ((playerChoice == 1 && computerChoice == 2) || (playerChoice == 2 && computerChoice == 3) || (playerChoice == 3 && computerChoice == 1)) {
        cout << "PLの勝ちです！\n";
    }
    else {
        cout << "CPUの勝ちです！\n";
    }
}

// じゃんけんゲームをプレイ
void playJankenGame() {
    srand(time(0)); 

    int playerChoice;
    int computerChoice;

    while (true) {
        cout << "じゃんけんをします！\n";
        cout << "1. グー\n";
        cout << "2. チョキ\n";
        cout << "3. パー\n";
        cout << "4. 終了\n";
        cout << "選択してください（1-4）: ";
        cin >> playerChoice;

        if (playerChoice == 4) {
            break; // ゲームを終了
        }

        if (playerChoice < 1 || playerChoice > 3) {
            cout << "無効な選択。n";
            continue;
        }

        computerChoice = getComputerChoice();
        determineWinner(playerChoice, computerChoice);
    }

    cout << "ゲームを終了します。\n";
}
