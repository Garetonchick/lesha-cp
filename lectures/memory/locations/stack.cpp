#include <iostream>

using namespace std;

/*
Program stack:
c: 31
b: 26
a: 4
bar()
p
l
<--- stack pointer
... foo
d

*/

void foo(int r, int k) {
    int x = 11;
    int d = 1;

    cout << "&r = " << &r << "\n";
    cout << "&k = " << &k << "\n";
    cout << "&d = " << &d << "\n";

}

void bar(int p, int l) {

}

int main() {
    volatile int a = 4;
    volatile int b = 26;
    volatile int c = 31;

    cout << "&a = " << (void*)&a << "\n";
    cout << "&b = " << (void*)&b << "\n";
    cout << "&c = " << (void*)&c << "\n";

    foo(a, b);
    bar(a, b);
}

/*
stack
heap

a, b, c, d

State 0:
.

Add 'b':
'b'

Add 'c'
'c'
'b'

Add 'a'
'a'
'c'
'b'

Add 'd'
'd'
'a'
'c'
'b'

Pop -> 'd'
'a'
'c'
'b'

Pop -> 'a'
'c'
'b'

...


*/

/*
Program stack:

*/