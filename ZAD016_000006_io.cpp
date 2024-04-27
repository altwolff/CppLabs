// ----------- ZAD6 -----------
//(io) Napisz program, który pobierze z parametru pin, następnie będzie prosił o wpisanie pinu do czasu aż urzytkownik wprowadzi pin podany w parametrze programu, wtedy wyswietli "Poprawny pin" i zakończy działanie programu

//./pass 1234 ➞ 
//	Podaj pin: 4321
//	Błędny pin
//	Podaj pin: 123
//	Błędny pin
//	Podaj pin: 1234
//	Poprawny pin


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc,char** argv) {
    int setPasscode = std::stoi(argv[1]);
    int inputPasscode = 0;
    while (inputPasscode != setPasscode) {
        std::cout << "Podaj pin:";
        std::cin >> inputPasscode;
        if (inputPasscode != setPasscode) {
            std::cout << "Błędny pin\n";
        }
    }
        std::cout << "Poprawny pin";
return 0;
}
// ROZWIĄZANIE KONIEC
