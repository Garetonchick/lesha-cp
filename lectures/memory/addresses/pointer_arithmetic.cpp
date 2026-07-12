#include <iostream>

using namespace std;

int main() {
    char c = 'x';
    char* c_ptr = &c;

    cout << "c address: " << (void*)c_ptr << "\n";
    cout << "c address + 1: " << (void*)(c_ptr + 1) << "\n";
    cout << "c address + 2: " << (void*)(c_ptr + 2) << "\n";
    cout << "c address + 3: " << (void*)(c_ptr + 3) << "\n";

    int i = 42;
    int* i_ptr = &i;

    cout << "i address: " << (void*)i_ptr << "\n";
    cout << "i address + 1: " << (void*)(i_ptr + 1) << "\n";
    cout << "i address + 2: " << (void*)(i_ptr + 2) << "\n";
    cout << "i address + 3: " << (void*)(i_ptr + 3) << "\n";
}