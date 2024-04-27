// ----------- ZAD98 -----------
//(switch) Jako parametr będzie przekazana dwucyfrowa liczba, przy czym cyfry będą jako odzielne parametry. Napisz program który wydrukuje reprezentacje słowną przekazanej liczby
//Nalerzy użyć switch-case

//./parametr 2 1 ➞ WYDRUKUJE: "dwadzieścia jeden"
//./parametr 4 2 ➞ WYDRUKUJE: "czterdzieści dwa"
//./parametr 1 1 ➞ WYDRUKUJE: "jedenaście"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc,char** argv) {
    int tensDigit = std::stoi(argv[1]);
    int onesDigit = std::stoi(argv[2]);
    if (tensDigit == 1) {
        switch (onesDigit) {
            case 0:
                std::cout << "dziesięć ";
                break;
            case 1:
                std::cout << "jedenaście ";
                break;
            case 2:
                std::cout << "dwanaście ";
                break;
            case 3:
                std::cout << "trzynaście ";
                break;
            case 4:
                std::cout << "czternaście ";
                break;
            case 5:
                std::cout << "piętnaście ";
                break;
            case 6:
                std::cout << "szesnaście ";
                break;
            case 7:
                std::cout << "siedemnaście ";
                break;
            case 8:
                std::cout << "osiemnaście ";
                break;
            case 9:
                std::cout << "dziewiętnaście ";
                break;
        }
        return 0;
    } else {
        switch (tensDigit) {
            case 2:
                std::cout << "dwadzieścia ";
                break;
            case 3:
                std::cout << "trzydzieści ";
                break;
            case 4:
                std::cout << "czterdzieści ";
                break;
            case 5:
                std::cout << "pięćdziesiąt ";
                break;
            case 6:
                std::cout << "sześćdziesiąt ";
                break;
            case 7:
                std::cout << "siedemdziesiąt ";
                break;
            case 8:
                std::cout << "osiemdziesiąt ";
                break;
            case 9:
                std::cout << "dziewięćdziesiąt ";
                break;
        }
        switch (onesDigit) {
            case 1:
                std::cout << "jeden ";
                break;
            case 2:
                std::cout << "dwa ";
                break;
            case 3:
                std::cout << "trzy ";
                break;
            case 4:
                std::cout << "cztery ";
                break;
            case 5:
                std::cout << "pięć ";
                break;
            case 6:
                std::cout << "sześć ";
                break;
            case 7:
                std::cout << "siedem ";
                break;
            case 8:
                std::cout << "osiem ";
                break;
            case 9:
                std::cout << "dziewięć ";
                break;
        }
        return 0;
    }
}
// ROZWIĄZANIE KONIEC
