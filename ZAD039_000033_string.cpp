// ----------- ZAD33 -----------
//(string) Ze stringów przekazanych w argumentach wydrukuj po spacjach tylko te w których wszystkie literki są takie same.


//Przykład:
//	./filter "aaa" "bbb" "ccc" ➞ WYDRUKUJE: "aaa bbb ccc"
//	./filter "a" "bc" "dd" ➞ WYDRUKUJE: "a dd"
//	./filter "hey" ➞ WYDRUKUJE: nic nie wydrukuje


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char **argv) {
	for(int i = 1; i < argc; i++) {
		std::string words = argv[i];
		bool q = 1;
		for (int j = 0; j < words.length()-1; j++) {
			if (words[j] != words[j+1]) {
				q = 0;
			}
		} if (q)std::cout << words << " ";
	}
	return 0;
}
// ROZWIĄZANIE KONIEC
