#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;
    int ci = c - '0';

    cout << ci << "\n";

    char cc = '0' + ci;
    cout << cc << "\n";

    for(char c = 'a'; c <= 'z'; ++c) {
        cout << c;
    }
    cout << "\n";
}