#include <iostream>

int main() {
    std::srand(std::time(0));
    const int random_value = std::rand() % 100;
    int current_value = 0;

    std::cout << "ent u guess:" << std::endl;

    do {
        std::cin >> current_value;

        if (random_value < current_value) {
            std::cout << "less than " << current_value << std::endl;
        }
        else
            if (random_value > current_value) {
            std::cout << "greater than " << current_value << std::endl;
        }
            else {
            std::cout << "you win!" << std::endl;
            break;
        }

    } while(true);

    return 0;
}

