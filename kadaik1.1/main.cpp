#include <iostream>
using namespace std;

#include "janken.h"
#include "kazuate.h" // 数当てゲームのヘッダをインクルード

int main() {
    int choice;

    while (true) {
        cout << "選択してください:\n";
        cout << "1. じゃんけんゲーム\n";
        cout << "2. 数当てゲーム\n";
        cout << "3. 終了\n";
        cin >> choice;

        switch (choice) {
        case 1:
            playJankenGame(); // じゃんけんゲームを呼び出す
            break;
        case 2:
            playKazuateGame(); // 数当てゲームを呼び出す
            break;
        case 3:
            cout << "ゲームを終了します。\n";
            return 0;
        default:
            cout << "無効な選択です。再度選択してください。\n";
            break;
        }
    }

    return 0;
}