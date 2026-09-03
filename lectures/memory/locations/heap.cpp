#include <iostream>

using namespace std;

struct S {
    int x;
    char c;
};

S* foo() {
    S* s_ptr = new S{.x = 4, .c = 'e'};

    return s_ptr;
}

void bar() {
    S* s_ptr = foo();

    cout << s_ptr->x << " " << s_ptr->c << "\n";

    delete s_ptr;
}

int main() {

    while(true) {
        bar();
    }

}