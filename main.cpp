#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    srand(time(0));

    std::string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%";
    int passwordLength;
    std::cout << "Enter the length of the password: ";
    std::cin >> passwordLength;

    for (int i = 0; i < passwordLength; i++) {
        int index = rand() % 66;
        std::cout << chars[index];
    }

    std::cout << std::endl;
    return 0;
}