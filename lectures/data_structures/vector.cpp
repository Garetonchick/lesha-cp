#include <iostream>
#include <vector>

using namespace std;

struct Vector {
    int* arr = nullptr;
    int size = 0;
    int capacity = 0;
};

void PrintVector(Vector* v) {
    cout << "{";

    for(int i = 0; i < v->size; ++i) {
        cout << v->arr[i];

        if(i + 1 < v->size) {
            cout << ", ";
        }
    }
    cout << "}\n";
}

void PushBack(Vector* v, int x) {
    if(v->arr == nullptr) {
        v->arr = new int[2];
        v->arr[0] = x;
        v->size = 1;
        v->capacity = 2;
        return;
    }

    if(v->size < v->capacity) {
        v->arr[v->size++] = x;
        return;
    }

    v->capacity *= 2;
    int* buf = new int[v->capacity];

    for(int i = 0; i < v->size; ++i) {
        buf[i] = v->arr[i];
    }

    delete[] v->arr;
    v->arr = buf;
    v->arr[v->size++] = x;
}

void PopBack(Vector* v) {
    --(v->size);
}

void Destroy(Vector* v) {
    delete[] v;
}

int main() {
    Vector v;
    PushBack(&v, 11);
    PushBack(&v, 5);
    PushBack(&v, 8);
    PushBack(&v, 42);
    // PushBack(&v, 31);

    PrintVector(&v);
    PopBack(&v);
    PrintVector(&v);
    cout << "capacity = " << v.capacity << "\n";
}

/*
|
| | | |

*/