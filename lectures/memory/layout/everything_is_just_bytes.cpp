#include <iostream>

using namespace std;

void PrintBytes(const void* addr, int size) {
    const unsigned char* bytes_ptr = (const unsigned char*)addr;

    for(int i = 0; i < size; ++i) {
        cout << (unsigned int)*(bytes_ptr + i) << " ";
    }
    cout << "\n";
}

int main() {
    unsigned int num = 100286;
    short snum = -30536;
    float f = 1e20 + 1e13;
    const char str[] = "hello world";

    unsigned int* num_ptr = &num;

    PrintBytes(&num, sizeof(num));
    PrintBytes(&snum, sizeof(snum));
    PrintBytes(&f, sizeof(f));
    PrintBytes(str, sizeof(str));

    unsigned int** num_ptr_ptr = &num_ptr;

    cout << (void*)num_ptr << "\n";
    cout << (void*)num_ptr_ptr << "\n";
    cout << (void*)*num_ptr_ptr << "\n";
}
