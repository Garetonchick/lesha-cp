#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

const int N = 1e5 + 10;

struct KeyValue {
    std::string key;
    int val;
};

std::vector<KeyValue> a[N];

/*
size <= 7
a..zA..Z0..9

62^7

*/

int CharToInt(char c) {
    return *reinterpret_cast<unsigned char*>(&c);
}

// 'a' = 1
// 'b' = 2
// 'c' = 3
// ...
// 'g' = 7

// "ac" = 7
// "g" = 7
int StringToInt(std::string s) {
    int hash = 0;

    for(int i = 0; i < s.size(); ++i) {
        hash += (i + 1) * CharToInt(s[i]);
    }

    return hash % N;
}

void Set(std::string key, int val) {
    std::vector<KeyValue>& v = a[StringToInt(key)];

    for(int i = 0; i < v.size(); ++i) {
        if(v[i].key == key) {
            v[i].val = val;
            return;
        }
    }

    v.push_back(KeyValue{
        .key = key,
        .val = val
    });
}

int Get(std::string key) {
    std::vector<KeyValue>& v = a[StringToInt(key)];

    for(int i = 0; i < v.size(); ++i) {
        if(v[i].key == key) {
            return v[i].val;
        }
    }

    return std::numeric_limits<int>::min();
}

int main() {
    Set("aboba", 31);
    Set("kek", -8);
    Set("lol", -42);

    cout << Get("aboba") << " " << Get("kek") << " " << Get("lol") << "\n";
}