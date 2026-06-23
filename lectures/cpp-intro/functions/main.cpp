#include <iostream>

using namespace std;

int Calculate(int a, int b) {
    return (a - b) * (a + b); 
}

int main() {
    int a = 0;
    int b = 0;
    cin >> a >> b;

    cout << Calculate(a, b) << "\n";
}
