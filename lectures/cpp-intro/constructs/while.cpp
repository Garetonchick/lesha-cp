#include <iostream>

using namespace std;

int main() {
    bool stop = false;

    while(!stop) {
        cout << "Do you want to stop?\n" 
             << "(Y/N): ";

        char c = 'N';
        cin >> c;

        stop = (c == 'Y');
    }

    cout << "Exit.\n";
}
