#include <iostream>

int main() {
    char c = 'x';
    short si = 42;
    int i = -2000000; // -2 * 10^6
    long long lli = 1000000000000; // 10^12
    unsigned int ui = 15;
    float f = 89.23f;
    double d = 100.88;
    bool b = true;
    const char* str = "Some string";
    const char str2[] = "Another string";
    // Try
    // str[0] = 'x';
    
    std::cout << "c = " << c << "\n";
    std::cout << "si = " << si << "\n";
    std::cout << "i = " << i << "\n";
    std::cout << "lli = " << lli << "\n";
    std::cout << "ui = " << ui << "\n";
    std::cout << "f = " << f << "\n";
    std::cout << "d = " << d << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "str = " << str << "\n";
    std::cout << "str2 = " << str2 << "\n";
    std::cout << "sizeof(str) = " << sizeof(str) << "\n"; 
    std::cout << "sizeof(str2) = " << sizeof(str2) << "\n"; 
}
