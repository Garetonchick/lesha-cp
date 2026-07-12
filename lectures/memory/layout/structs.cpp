#include <iostream>

using namespace std;

struct Coord {
    int x;
    int y;
};

struct A {
    alignas(8) char c;
    short s;
};

struct B {
    char c;
    short s;
};

// 322 323 324 325 326 327 328 329
// c1   *  s1       c2  *   s2

void Print(Coord coord) {
    cout << coord.x << " " << coord.y << "\n";
}

void PrintBytes(const void* addr, int size) {
    const unsigned char* bytes_ptr = (const unsigned char*)addr;

    for(int i = 0; i < size; ++i) {
        cout << (unsigned int)*(bytes_ptr + i) << " ";
    }
    cout << "\n";
}

int main() {
    Coord coord;

    coord.x = 4;
    coord.y = -8;

    Print(coord);

    Coord coord2 = {.x = 7, .y = 2};

    Print(coord2);

    cout << "sizeof(Coord): " << sizeof(Coord) << "\n";
    PrintBytes(&coord2, sizeof(Coord));

    cout << "sizeof(A): " << sizeof(A) << "\n";

    A a[5];
}