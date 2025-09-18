#include<iostream>
using namespace std;

//Funkcja ktora zwraca czy liczba jest pierwsza
bool isPrime(int a) 
{
    for (int i = 2; i < a; i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

//Funkcja ktora zwraca czy liczba jest parzysta
bool isEven(int a) {
    return a % 2 == 0;
}
/*
    Nieużywana funkcja
    bool isNotEven(int a) {
        return a % 2 != 0;
    }
*/

int main() {
    cout << isPrime(5) << endl;
    return 0;
}