// ----------- ZAD49 -----------
//(recursive) Zrób zadanie 17 używając rekurencji, nie używaj pętli
//Napisz program, który wydrukuje sumę wszystkich PARZYSTYCH liczb przekazanych jako argumenty 
//		
//Przykład:
//	./even 1 2 3 4 ➞ WYDRUKUJE: "6"
//	./even 1 1 1 1 ➞ WYDRUKUJE: "0"
//	./even -1 -2 -3 -4 ➞ WYDRUKUJE: "-6"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int even(int argc, char** argv, int i = 1) {
	if (i >= argc) {
		return 0;
	}
	if (std::stoi(argv[i]) % 2 == 0) {
		return even(argc, argv, i + 1) + std::stoi(argv[i]);
	}
	return even(argc, argv, i +1);
}


int main(int argc, char** argv) {
	std::cout << even(argc, argv, 1);
	return 0;
}
// ROZWIĄZANIE KONIEC
