// ----------- ZAD27 -----------
//(string) Wydrukuj jego długość pierwszego parametru. Skorzystaj ze string aby <a href=https://cplusplus.com/reference/string/string/length/>okreslic dlugosc</a>


// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <string>

int main(int argc, char **argv) {
    std::string firstParameter = argv[1];
    std::cout << firstParameter.length() << std::endl;
    return 0;
}
// ROZWIĄZANIE KONIEC
