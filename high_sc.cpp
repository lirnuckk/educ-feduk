#include <iostream>
#include <fstream>
#include <string>

int write_high_score() {
    const std::string high_sc_filename = "high_sc.txt";

    std::cout << "hi. ent u name pls" << std::endl;
    std::string user_name;
    std::cin >> user_name;

    std::cout << "ent u high score:" << std::endl;
    int attempts_count = 0;
    std::cin >> attempts_count;
    if (std::cin.fail()) {
        std::cout << "bad value!" << std::endl;
        return -1;
    }

    {
        std::ofstream out_file{high_sc_filename, std::ios_base::app};
        if (!out_file.is_open()) {
            std::cout << "failed to open file for write: " << high_sc_filename << "!" << std::endl;
            return -1; }

        out_file << user_name << ' ';
        out_file << attempts_count;
        out_file << std::endl;

    }

    {
        std::ifstream in_file{high_sc_filename};
        if (!in_file.is_open()) {
            std::cout << "failed to open file for read: " << high_sc_filename << "!" << std::endl;
            return -1;
        }

        std::cout << "high scores table:" << std::endl;

        std::string username;
        int high_score = 0;
        while (true) {
            in_file >> username;
            in_file >> high_score;
            in_file.ignore();

            if (in_file.fail()) {
                break;
            }

            std::cout << username << '\t' << high_score << std::endl;
        }
    }

    return 0;
};

