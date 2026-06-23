#include <iostream>

int main() {
    int x = 0;
    std::cout << "Enter your number: ";
    std::cin >> x;

    if(x >= 0 && x <= 100) {
        std::cout << "Your number is between 0 and 100.\n";
    } else if(x < 0) {
        std::cout << "Your number is negative.\n";
    } else {
        std::cout << "Your number is greater than 100.\n";
    }
}
