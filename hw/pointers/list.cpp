#include <iostream>

using namespace std;

const int N = 100;

int arr[N];
int nxt[N];
int start_idx = -1;
int top = 0;

void AddElement(int pos, int x) {
    int idx = top++;
    arr[idx] = x;

    if(pos == 0) {
        nxt[idx] = start_idx;
        start_idx = idx;
        return;
    }
    --pos;

    int current_idx = start_idx;

    while(pos--) {
       current_idx = nxt[current_idx]; 
    }

    nxt[idx] = nxt[current_idx];
    nxt[current_idx] = idx;
}

void Del(int pos) {
    if(pos == 0) {
        start_idx = nxt[start_idx];
        return;
    }

    --pos;

    int current_idx = start_idx;

    while(pos--) {
       current_idx = nxt[current_idx]; 
    }

    nxt[current_idx] = nxt[nxt[current_idx]];
}

void Print() {
    int current_idx = start_idx;

    while(current_idx != -1) {
        cout << arr[current_idx];
        current_idx = nxt[current_idx];

        if(current_idx != -1) {
            cout << " <-> ";
        }
    }
    cout << "\n";
    cout.flush();
}

int main() {
    for(int i = 0; i < N; ++i) {
        nxt[i] = -1;
    }

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