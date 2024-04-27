// ----------- ZAD37 -----------
//(function) Napisz program, który potęguje liczby całkowite. 
//Aby to zrobić, zadeklaruj własną funkcję. 
//Funkcja powinna mieć sygnaturę:
//void mypow(int, int, int&);

//./pow 2 3 ➞ WYDRUKUJE: 8

void mypow(int, int, int&);
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
