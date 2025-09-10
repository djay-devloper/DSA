#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    char c;
};

int main() {
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of MyClass: " << sizeof(MyClass) << endl;
    return 0;
}
/*Intuition:

You might expect size = 4 (int) + 1 (char) = 5 bytes.

But often, sizeof(MyClass) returns 8 bytes instead of 5!
Why?
1. Memory Alignment

Most CPUs access data more efficiently when data is aligned to certain boundaries (usually multiples of 4 or 8 bytes).

int usually requires 4-byte alignment (starts at an address divisible by 4).

char only needs 1 byte, but…

2. Padding

To keep the class members aligned properly, the compiler adds padding bytes after char c so the total size is aligned to the largest member's alignment requirement (which is 4 bytes here).

Memory layout looks like this:
Byte offset	0	1	2	3	4	5	6	7
Content	x (4 bytes)	c (1 byte)	padding (3 bytes)					
So, total size = 4 (int) + 1 (char) + 3 (padding) = 8 bytes*/
