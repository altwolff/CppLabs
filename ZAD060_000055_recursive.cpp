// ----------- ZAD55 -----------
//(recursive) Zrób zadanie 30 używając rekurencji
//Sprawdź czy słowo zawarte w parametrze jest palindromem – wydrukuj "true" jeśli jest lub "false" jeśli nie jest
//użyj klasy String, nie używaj wbudowanego odwracania stringów


// ROZWIĄZANIE POCZATEK
#include <iostream>

void palindrome(int argc, char** argv, int i = 0) {
	std::string word = argv[1];
	if (i > word.length() / 2) {
		std::cout << "true" << std::endl;
		return;
	}
	if (word[i] != word[word.length() - 1 - i]) {
		std::cout << "false" << std::endl;
		return;
	}
	palindrome(argc, argv, i + 1);
}

int main(int argc, char** argv) {
	palindrome(argc, argv);
}
// ROZWIĄZANIE KONIEC
