#include <iostream>

using namespace std;

int a[256];

int CharToInt(char c) {
    return *reinterpret_cast<unsigned char*>(&c);
}

void Set(char c, int val) {
    a[CharToInt(c)] = val;
}

int Get(char c) {
    return a[CharToInt(c)];
}

int main() {
    Set('b', 31);
    Set('y', -8);
    Set('k', -42);

    cout << Get('b') << " " << Get('y') << " " << Get('k') << "\n";
}