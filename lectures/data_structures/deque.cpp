#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Deque {
    std::vector<int> data;
    int idx = 0;
    int size = 0;
};

void ResizeOnOverflow(Deque* dq) {
    if(dq->size < dq->data.size()) {
        return;
    }

    std::vector<int> copy;
    copy.resize(max<int>(1, dq->data.size() * 2));

    for(int i = 0; i < dq->size; ++i) {
        copy[i] = dq->data[(dq->idx + i) % dq->data.size()];
    }

    dq->data = std::move(copy);
    dq->idx = 0;
}

void PushBack(Deque* dq, int val) {
    ResizeOnOverflow(dq);

    dq->data[(dq->idx + dq->size) % dq->data.size()] = val;
    ++dq->size;
}

void PushFront(Deque* dq, int val) {
    ResizeOnOverflow(dq);

    int buf_size = dq->data.size();
    dq->idx = (dq->idx - 1 + buf_size) % buf_size;
    dq->data[dq->idx] = val;
    ++dq->size;
}

int Get(Deque* dq, int i) {
    return dq->data[(dq->idx + i) % dq->data.size()];
}

int main() {
    Deque dq;

    PushBack(&dq, 4);
    PushFront(&dq, 8);
    PushFront(&dq, 3);
    PushFront(&dq, 7);
    PushBack(&dq, 11);
    // 7 3 8 4 11

    std::cout << Get(&dq, 3) << "\n";
}