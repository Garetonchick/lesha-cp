#include <iostream>

using namespace std;

float PI = 1.34;

void foo(char c) {
    int num = 42;

    cout << "local \"num\" has address: " << &num << "\n";
    cout << "parameter \"c\" has address: " << (void*)&c << "\n";
    cout << "global \"PI\" has address: " << &PI << "\n";
    cout << "function \"foo\" has address: " << (void*)&foo << "\n";
    cout << "global object \"cout\" has address: " << &cout << "\n";
    // Literals don't have addresses
    //cout << "address of 42: " << &42 << "\n"; //-- Does not work
    //cout << "address of 'r': " << &'r' << "\n"; -- Does not work

    // Except for a string literal...
    cout << "address of cstring: " << &"hello" << "\n";
    cout << "address of another cstring: " << &"bye" << "\n";
    cout << "address of \"hello\" cstring again: " << &"hello" << "\n";
}

/*
memory = char[10000000000]

 0 1 2 3 ...
| | | | |


0, ..., 9, a, b, c, d, e, f


0x10 = 16



*/

int main() {
    foo('m');
}