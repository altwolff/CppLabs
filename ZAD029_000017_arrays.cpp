// ----------- ZAD17 -----------
//(arrays) Napisz program, który wydrukuje sumę wszystkich PARZYSTYCH liczb przekazanych jako argumenty 
//		
//Przykład:
//	./even 1 2 3 4 ➞ WYDRUKUJE: "6"
//	./even 1 1 1 1 ➞ WYDRUKUJE: "0"
//	./even -1 -2 -3 -4 ➞ WYDRUKUJE: "-6"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char **argv) {
    int sum = 0;
    for (int i = 1; i < argc; i++) {
        int n = std::stoi(argv[i]);
        if (std::stoi(argv[i]) % 2 == 0) {
            sum = sum + n;
        }
    }
    std::cout << sum;
    return 0;
}
// ROZWIĄZANIE KONIEC
