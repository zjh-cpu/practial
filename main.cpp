#include <iostream>
#include <stdlib.h>
#include <time.h>

enum Choice {
    ROCK = 1,
    PAPER,
    SCISSORS
};

std::string to_string(Choice choice) {
    switch (choice) {
        case ROCK: return "石头";
        case PAPER: return "布";
        case SCISSORS: return "剪刀";
    }
    return "";
}

Choice get_computer_choice() {
    return static_cast<Choice>(rand() % 3 + 1);
}

Choice get_user_choice() {
    int choice;
    std::cout << "请输入您的选择 (1-石头, 2-布, 3-剪刀): ";
    std::cin >> choice;
    return static_cast<Choice>(choice);
}

void decide_winner(Choice user_choice, Choice computer_choice) {
    if (user_choice == computer_choice) {
        std::cout << "平局! 都选择了: " << to_string(user_choice) << "\n";
    } else if ((user_choice == ROCK && computer_choice == SCISSORS)
            || (user_choice == PAPER && computer_choice == ROCK)
            || (user_choice == SCISSORS && computer_choice == PAPER)) {
        std::cout << "你赢了! 你选择了: " << to_string(user_choice) << " 计算机选择了: " << to_string(computer_choice) << "\n";
    } else {
        std::cout << "你输了! 你选择了: " << to_string(user_choice) << " 计算机选择了: " << to_string(computer_choice) << "\n";
    }
}

int main() {
    srand(time(0));  // 初始化随机数种子

    while (true) {
        Choice user_choice = get_user_choice();
        Choice computer_choice = get_computer_choice();

        decide_winner(user_choice, computer_choice);

        char play_again;
        std::cout << "要再玩一次吗? (y/n): ";
        std::cin >> play_again;
        if (play_again != 'y') {
            break;
        }
    }

    return 0;
}