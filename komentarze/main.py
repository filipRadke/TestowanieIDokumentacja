def is_prime(n):
    """FUnkcja ktora sprawdza czy liczba jest pierwsza"""
    if n <= 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, int(n**0.5)+1, 2):
        if n % i == 0:
            return False
    return True

def is_even(a):
    return a % 2 == 0

#przykladowe uzycie 
print(is_prime(11))  # True
print(is_even(10))   # True