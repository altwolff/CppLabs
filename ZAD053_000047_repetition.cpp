// ----------- ZAD47 -----------
//(repetition) (powtórka) Napisz program, który zamienia każdą literę w danym łańcuchu znaków przekazanym w agrumencie na następującą po niej literę alfabetu (tj. a staje się b, p staje się q, z staje się a)
//Przykład:

//./string_inc czy1Ja2wieM ➞ WYDRUKUJE: daz1Kb2xjfN


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char **argv) {
    std::string nextLetter = argv[1];
    for (char &i: nextLetter) {
        if (i >= 'a' && i <= 'z' || i >= 'A' && i <= 'Z') {
            if (i == 'z') {
                i = 'a';
            } else if (i == 'Z') {
                i = 'A';
            } else {
                i += 1;
            }
        }
    }
    std::cout << nextLetter << std::endl;
    return 0;
}
// ROZWIĄZANIE KONIEC
