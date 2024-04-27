// ----------- ZAD10 -----------
//(arrays) Jako parametry zostaną przekazane liczby całkowite
//Wydrukuj indeks pierwszego wystąpienia pod rząd co najmniej trzech wartości większych od 1000 w tablicy parametrów

//./gt 1 1 1 1 1111 1111 1 11 1111 1111 1111 1111 1 ➞ WYDRUKUJE: "8"



// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char **argv) {
    for (int i = 1; i < argc - 2; i++) {
        if (std::stoi(argv[i]) > 1000 && std::stoi(argv[i + 1]) > 1000 && std::stoi(argv[i + 2]) > 1000) {
            std::cout << i - 1;
            return 0;
        }
    }
    return 0;
}
// ROZWIĄZANIE KONIEC
