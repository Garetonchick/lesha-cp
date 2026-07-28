#include <iostream>

using namespace std;

const int N = 100;

struct Node {
    int value = 0;
    int idx = -1;
};

Node arr[N];
int start_idx = -1;
int top = 0;

void AddElement(int pos, int x) {
    int idx = top++;
    arr[idx].value = x;

    if(pos == 0) {
        arr[idx].idx = start_idx;
        start_idx = idx;
        return;
    }
    --pos;

    int current_idx = start_idx;

    while(pos--) {
       current_idx = arr[current_idx].idx; 
    }

    arr[idx].idx = arr[current_idx].idx;
    arr[current_idx].idx = idx;
}

void Del(int pos) {
    if(pos == 0) {
        start_idx = arr[start_idx].idx;
        return;
    }

    --pos;

    int current_idx = start_idx;

    while(pos--) {
       current_idx = arr[current_idx].idx; 
    }

    arr[current_idx].idx = arr[arr[current_idx].idx].idx;
}

void Print() {
    int current_idx = start_idx;

    while(current_idx != -1) {
        cout << arr[current_idx].value;
        current_idx = arr[current_idx].idx;

        if(current_idx != -1) {
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