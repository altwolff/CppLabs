// ----------- ZAD96 -----------
//(switch) Napisz program, który pobierze z pierwszego parametru numer miesiąca i używajac switch wydrukuje jego nazwe. Wynik wydrukuj na standardowe wyjscie.

//./parametr 1 ➞ WYDRUKUJE: "Styczeń"
//./parametr 2 ➞ WYDRUKUJE: "Luteń"


// ROZWIĄZANIE POCZATEK
#include <iostream>
int main(int argc, char* argv[]) {
    int N = std::stoi(argv[1]);
    if (N < 1 || N > 12) {
        std::cout << "Nie ma takiego miesiąca\n";
        return 0;
    }
    switch (N) {
        case 1:
            std::cout << "Styczeń\n";
            break;
        case 2:
            std::cout << "Luty\n";
            break;
        case 3:
            std::cout << "Marzec\n";
            break;
        case 4:
            std::cout << "Kwiecień\n";
            break;
        case 5:
            std::cout << "Maj\n";
            break;
        case 6:
            std::cout << "Czerwiec\n";
            break;
        case 7:
            std::cout << "Lipiec\n";
            break;
        case 8:
            std::cout << "Sierpień\n";
            break;
        case 9:
            std::cout << "Wrzesień\n";
            break;
        case 10:
            std::cout << "Październik\n";
            break;
        case 11:
            std::cout << "Listopad\n";
            break;
        case 12:
            std::cout << "Grudzień\n";
            break;
    }
return 0;
}
// ROZWIĄZANIE KONIEC
