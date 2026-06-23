#include <iostream>

int main() {
    int i = 42;
    i = true;

    long long lli = i; 
    short si = i;

    std::cout << "i = " << i << "\n";
    std::cout << "lli = " << lli << "\n";
    std::cout << "si = " << si << "\n";
}
