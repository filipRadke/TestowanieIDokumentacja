#include <iostream>
using namespace std;

bool isDivisible(int x, int y) {
    if (y == 0) return false;
    if (x % y == 0) return true;
    return false;
}

int main()
{
    cout << "Hello World!\n";
}

