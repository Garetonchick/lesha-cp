# HW 1. Pointers.

## Tasks

### Task 0. Decode.

In [`everything_is_just_bytes.cpp`](../../lectures/memory/layout/everything_is_just_bytes.cpp) example it was shown how one can print internal byte representation of an object.
Your task is to do the opposite. Read bytes (as integers) from standart input (i.e. console) and interpret them
as a single 4 byte unsigned integer. You can verify your program by running aforementioned `everything_is_just_bytes.cpp` example.

Bonus: Make a program which lets you choose in what way to interpret inputted bytes. E.g.
4 bytes: 99, 111, 108, 97 can be interpreted as 1634496355 unsigned 4-byte [little-endian](https://en.wikipedia.org/wiki/Endianness) integer. Or they can be interpreted as a "cola" string (provided you append zero byte at the end). Prompt user to choose out of at least 3 distinct types (e.g. unsigned int, float, string).

Super bonus: Can you make your program work with arbitrary struct?

### Task 1. Binary to decimal.

Write a program which converts bit string (e.g. "100101000") into a decimal integer.

### Task 2. Decimal to binary.

Like the last task, but the other way around.

### Task* 3. I love data structures.

Your task is to write a program which maintains a list of items (represented as numbers).
Initially the list is empty. You need to support 3 operation types for your list:

1) `1 x i` 
Insert number x after ith element in the list.

2) `2 i`
Erase ith number from the list.

3) `3`
Print current state of the list.

To implement this, I recommend using an array. There is an obvious solution of shifting a part of 
an array for each insert/remove operation. However, I strongly encourage you to come up with a solution 
where elements of the array do not change their positions (unless element is removed and reinserted later of course).
