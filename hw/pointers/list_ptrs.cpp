#include <iostream>

using namespace std;

const int N = 100;

struct Node {
    int value = 0;
    Node* nxt = nullptr;
};

Node arr[N];
Node* start_ptr = nullptr;
Node* top_ptr = arr;

void AddElement(int pos, int x) {
    Node* ptr = top_ptr++;
    ptr->value = x;

    if(pos == 0) {
        ptr->nxt = start_ptr;
        start_ptr = ptr;
        return;
    }
    --pos;

    Node* current_ptr = start_ptr;

    while(pos--) {
       current_ptr = current_ptr->nxt; 
    }

    ptr->nxt = current_ptr->nxt;
    current_ptr->nxt = ptr;
}

void Del(int pos) {
    if(pos == 0) {
        start_ptr = start_ptr->nxt;
        return;
    }

    --pos;

    Node* current_ptr = start_ptr;

    while(pos--) {
       current_ptr = current_ptr->nxt; 
    }

    current_ptr->nxt = current_ptr->nxt->nxt;
}

void Print() {
    Node* current_ptr = start_ptr;

    while(current_ptr != nullptr) {
        cout << current_ptr->value;
        current_ptr = current_ptr->nxt;

        if(current_ptr != nullptr) {
            cout << " <-> ";
        }
    }
    cout << "\n";
    cout.flush();
}

int main() {
    int q = 0;
    cin >> q;
    
    while(q--) {
        int t;
        cin >> t;

        if(t == 1) {
            int pos, x;
            cin >> x >> pos;
            AddElement(pos, x);
        } else if(t == 2) {
            int pos;
            cin >> pos;
            Del(pos);
        } else {
            Print();
        }
    }
}