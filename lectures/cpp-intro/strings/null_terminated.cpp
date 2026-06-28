#include <iostream>

void func(char arr[]) {
    arr[0] = 'H';
    arr[1] = 'i';
    arr[2] = ' ';
    arr[3] = 'a';
    arr[4] = 'r';
    arr[5] = 'r';
    arr[6] = 'a';
    arr[7] = 'y';
    arr[8] = '\0'; // special "zero" symbol which indicates end of string
    // arr[8] = 'd';
}

void set(int x) {
    x = 10;
}

int main() {
    char arr[] = "Hi array";
    long long y = 42;

    // func(arr);

    int x = 3;
    set(x);

    std::cout << arr << "\n";
    std::cout << sizeof(arr) << "\n";
}