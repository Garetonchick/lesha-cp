#include <iostream>

using namespace std;

int main() {
    int arr[] = {3, 12, 5, 8, 1, 9};

    int* i_ptr = arr;

    cout << *i_ptr << "\n";
    cout << *(i_ptr + 1) << "\n";
    cout << *(i_ptr + 2) << "\n";
    cout << *(i_ptr + 3) << "\n";
}