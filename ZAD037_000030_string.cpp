// ----------- ZAD30 -----------
//(string) Sprawdź czy słowo zawarte w parametrze jest palindromem – wydrukuj "true" jeśli jest lub "false" jeśli nie jest
//użyj klasy String, nie używaj wbudowanego odwracania stringów


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char **argv) {
	std::string word = argv[1];
	for (int i = 0; i < word.length() / 2; i++) {
		if (word[i] != word[word.length() - 1 - i]) {
			std::cout << "false" << std::endl;
			return 0;
		}
	}
	std::cout << "true" << std::endl;
	return 0;
}
// ROZWIĄZANIE KONIEC
