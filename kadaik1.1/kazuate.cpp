#include "kazuate.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playKazuateGame() {
    srand(time(0)); // 乱数生成

    int secretNumber = rand() % 100 + 1; // 1から100までの乱数を生成
    int guess;
    int attempts = 0;

    cout << "1から100までの数を当ててください。\n";

    while (true) {
        cout << "予想した数を入力: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "もっと大きな数です。\n";
        }
        else if (guess > secretNumber) {
            cout << "もっと小さな数です。\n";
        }
        else {
            cout << "正解です！" << secretNumber << "が答えで、" << attempts << "回目の予想で当たりました。\n";
            break;
        }
    }
}
