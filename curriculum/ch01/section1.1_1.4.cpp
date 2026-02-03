//
//  section1.1_1.4.cpp
//  dokushu_cpp
//
//  Created by ebina on 2026/02/03.
//



#include <iostream>
#include <string>

// 1. 返り値を持たない関数を定義するための型（____）を埋めてください
void greet(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

int main() {
    // 2. 整数型変数 a を 15, b を 4 で初期化し、a を b で割った「余り」を r に代入してください
    int a = 15;
    int b = 4;
    int r = a%b;

    // 3. 条件分岐を使い、r が 0 でなければその値を表示する処理を完成させてください
    if (r != 0) {
        std::cout << "余りは " << r << " です。" << std::endl;
    }

    return 0;
}
