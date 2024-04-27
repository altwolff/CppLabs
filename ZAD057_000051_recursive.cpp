// ----------- ZAD51 -----------
//(recursive) Zrób zadanie 19 używając rekurencji, nie używaj pętli
//Napisz program, który pobierze z parametru liczbę naturalną N, a następnie wydrukuje z gwiazdek Krzyż świętego Andrzeja o szerokości N

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

void andrew(int argc, char** argv, int i=0, int j=0) {
	if (j >= std::stoi(argv[1])) {
		++i;
		j=0;
		std::cout << std::endl;
	}
	if (i >= std::stoi(argv[1])) {
		return;
	}
	if (i == j || i + j == std::stoi(argv[1]) - 1) {
		std::cout << "*";
	} else {
		std::cout << " ";
	}
	andrew(argc, argv, i, j + 1);
}

int main (int argc, char** argv) {
	andrew(argc, argv);
}
// ROZWIĄZANIE KONIEC
