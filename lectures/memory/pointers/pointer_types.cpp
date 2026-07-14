#include <iostream>

using namespace std;

int main() {
    char c = 'x';
    int i = 10000000;
    float f = 1.8f;

    char* c_ptr = &c;
    int* i_ptr = &i;
    float* f_ptr = &f;

    const char* str = "c address: ";

    cout << str << (void*)c_ptr << "\n";
    cout << "i address: " << i_ptr << "\n";
    cout << "f address: " << f_ptr << "\n";

    cout << "char* pointer size: " << sizeof(c_ptr) << "\n";
    cout << "int* pointer size: " << sizeof(i_ptr) << "\n";
    cout << "float* pointer size: " << sizeof(f_ptr) << "\n";

    void* any_pointer = i_ptr;

    cout << "i address through void* pointer: " << any_pointer << "\n";
    cout << "void* pointer size: " << sizeof(any_pointer) << "\n";

    cout << "char* value by address: " << *c_ptr << "\n";
    cout << "int* value by address: " << *i_ptr << "\n";
    cout << "float* value by address: " << *f_ptr << "\n";

    cout << *(int*)any_pointer << "\n";
}

// int*
//  ||
//  \/ 
// |42|0|0|0|
//
// short*
//  ||
//  \/ 
// |42|0|
//
//
