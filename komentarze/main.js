//Funkcja ktora zwraca czy liczba jest pierwsza
function isPrime(a) {
    for (let i = 2; i < a; i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

//Funkcja ktora zwraca czy liczba jest parzysta
function isEven(a) {
    return a % 2 == 0;
}
/*
    Nieużywana funkcja
    function isNotEven(a) {
        return a % 2 != 0;
    }
*/