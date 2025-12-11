#include <iostream>
using namespace std;

bool isDivisible(unsigned int x,unsigned int y) {
    if (y == 0) return false;
    if (x % y == 0) return true;
    return false;
}

bool isPrime(unsigned int x) {
    if(x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if(x % i == 0) return false;
    }
    return true;
}

int summed(unsigned int x, unsigned int y) {
    int len = 10;
    while (1) {
        if(len < y) len*=10;
        else break;
    }
    x *= len;

    return x + y;
}

int main()
{
    cout << isDivisible(10,2) << endl << isPrime(10) << endl << summed(10,15);
}

