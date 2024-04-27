// ----------- ZAD36 -----------
//(function) Napisz program, który potęguje liczby całkowite. 
//Liczba i potęga są podane w argumentach, wynik ma być wydrukowany na standardowe wyjście. 
//Aby to zrobić, zadeklaruj własną funkcję. Funkcja powinna mieć sygnaturę:
//int mypow(int, int);

//./pow 2 3 ➞ WYDRUKUJE: 8

int mypow(int, int);
// ROZWIĄZANIE POCZATEK
#include <iostream>
int mypow(int a, int b) {
        int result = 1;
        for (int i = 0; i < b; i++) {
            result *= a;
        }
        return result;
    }
int main(int argc, char **argv) {

    std::cout << mypow(std::stoi(argv[1]), std::stoi(argv[2])) << std::endl;
    return 0;
}
// ROZWIĄZANIE KONIEC
