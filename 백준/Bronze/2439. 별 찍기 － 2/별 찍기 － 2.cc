#include <iostream>

int main() {
    int count;
    std::cin >> count;

    for (int i = 1; i <= count; i++) {
        for (int j = 1; j <= count - i; ++j) {
            std::cout << " ";
        }


        for (int j = 1; j <= i; ++j) { ;
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}