#include <iostream>

int main() {
    int i = 42;
    long long lli = i;
    short si = static_cast<short>(i);

    std::cout << "i = " << i << "\n";
    std::cout << "lli = " << lli << "\n";
    std::cout << "si = " << si << "\n";
}
