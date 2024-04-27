// ----------- ZAD50 -----------
//(recursive) Zrób zadanie 9 używając rekurencji, nie używaj pętli
//Jako parametry zostaną przekazane liczby całkowite
//Sprawdź i wydrukuj ile razy w tablicy parametrów występuje sekwencja 1 2 1

//./seq 0 1 2 1 2 1 5 ➞ WYDRUKUJE: "2"
//./seq 9 9 9 1 2 1 1 2 1 9 9 1 2 1 ➞ WYDRUKUJE: "3"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int sequence(int argc, char** argv, int i) {
	if (i >= argc - 2) {
		return 0;
	}
	if (std::stoi(argv[i]) == 1 && std::stoi(argv[i + 1]) == 2 && std::stoi(argv[i + 2]) == 1) {
		return sequence(argc, argv, i + 1) + std::stoi(argv[i]);
	}
	return sequence(argc, argv, i + 1);
}

int main (int argc, char** argv) {
	std::cout << sequence(argc, argv, 1);
}
// ROZWIĄZANIE KONIEC
