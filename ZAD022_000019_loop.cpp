// ----------- ZAD19 -----------
//(loop) Napisz program, który pobierze z parametru liczbę naturalną N, a następnie wydrukuje z gwiazdek Krzyż świętego Andrzeja o szerokości N

//./andrzej 4 ➞ WYDRUKUJE: 
//	*  *
//	 **
//	 **
//	*  *
//./andrzej 3 ➞ WYDRUKUJE: 
//	* *
//	 *
//	* *


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc,char** argv) {
int stAndrewsSize = std::stoi(argv[1]);
    for (int i = 0; i < stAndrewsSize; i++) {
        for (int j = 0; j < stAndrewsSize; j++){
            if (i == j || i + j == stAndrewsSize - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}
// ROZWIĄZANIE KONIEC
