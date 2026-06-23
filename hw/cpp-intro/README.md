# HW 0. C++ Intro.

The goal of this homework is to become (somewhat) comfortable with 
writing small, simple programs in C++ and compiling them using command line.

## Tasks

### Task 0. Pow.

Implement a `Pow(a, b)` function which computes `a^b`. `a` and `b` are both integers.

Test this function out. Does it always work correctly? For what inputs does it fail? Why?

### Task 1. Rock-Paper-Scissors.

Implement Rock-Paper-Scissors game in C++. The user will play 3 rounds against a computer, which 
randomly selects its move. You may use [`rand()`](https://en.cppreference.com/c/numeric/random/rand) function
for randomness.

Bonus: Can you implement custom probabilities for computer moves? For example: 

Rock - 17%

Paper - 29%

Scissors - 54%

### Task 2. itoa.

Implement a function which converts integer to a string which represents this integer.

Does your function work correctly if number is negative? If it is 0?

You may find modulus `%` operator useful.

You can pass an array to a function like so:
```cpp
void func(char arr[]) {
    arr[0] = 'H'
    arr[1] = 'i'
    arr[2] = ' ';
    arr[3] = 'a'
    arr[4] = 'r'
    arr[5] = 'r'
    arr[6] = 'a'
    arr[7] = 'y';
    arr[8] = '\0'; // special "zero" symbol which indicates end of string
}

int main() {
    char arr[9];

    func(arr);

    std::cout << arr << "\n";
}

// Output: "Hi array"
```

### Task 3. atoi.

Implement a function analogous to [`atoi`](https://en.cppreference.com/cpp/string/byte/atoi). This function takes a string and interprets it as an integer, if possible.

## Useful commands

### Compilation
To build (i.e. compile and link) your program:

```bash
g++ src1.cpp src2.cpp src3.cpp ... -o your_exe_name
```

To run `your_exe_name` in the current directory:
```bash
./your_exe_name
```

To see preprocessor output:
```bash
g++ -E src.cpp -o preprocessed_src.cpp
```

To compile (without linking) source files:
```bash
g++ -c src1.cpp src2.cpp src3.cpp ...
```

To link object files into an executable:
```bash
g++ src1.o src2.o src3.o ... -o your_exe_name
```

### Misc cheatsheet

To navigate to a directory use `cd`.

To print current directory use `pwd`.

To list contents of the current directory use `ls` (or `ls -lah` for richer output).

Print contents of a file to standard output: `cat file`.