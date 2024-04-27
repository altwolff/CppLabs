// ----------- ZAD9 -----------
//(arrays) Jako parametry zostaną przekazane liczby całkowite
//Sprawdź i wydrukuj ile razy w tablicy parametrów występuje sekwencja 1 2 1

//./seq 0 1 2 1 2 1 5 ➞ WYDRUKUJE: "2"
//./seq 9 9 9 1 2 1 1 2 1 9 9 1 2 1 ➞ WYDRUKUJE: "3"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char **argv) {
    int sequenceAppearance = 0;
    for (int i = 1; i < argc - 2; i++) {
        if (std::stoi(argv[i]) == 1 && std::stoi(argv[i + 1]) == 2 && std::stoi(argv[i + 2]) == 1) {
            sequenceAppearance++;
        }
    }
    std::cout << sequenceAppearance;
    return 0;
}
// ROZWIĄZANIE KONIEC
