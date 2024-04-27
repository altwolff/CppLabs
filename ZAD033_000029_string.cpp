// ----------- ZAD29 -----------
//(string) wydrukuj od końca słowo zawarte w pierwszym parametrze
//użyj klasy String
//./rev abcd ➞ WYDRUKUJE: dcba


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char **argv) {
	std::string word = argv[1];
	int last = word.length() - 1;
	for (int i = 0; i < word.length() / 2; i++) {
		std::swap(word[i], word[last]);
		last = last - 1;
	}
	std::cout << word;
	return 0;
}
// ROZWIĄZANIE KONIEC
