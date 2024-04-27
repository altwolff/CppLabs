// ----------- ZAD11 -----------
//(arrays) Jako parametr przekazana jest liczba naturalna
//Wydrukuj reprezentację binarną przekazanej w argumecie liczby

//./binary 11 ➞ WYDRUKUJE: "1011"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char **argv) {
    int decimal = std::stoi(argv[1]);
    std::string binary;
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    std::cout << binary << std::endl;
    return 0;
}
// ROZWIĄZANIE KONIEC
