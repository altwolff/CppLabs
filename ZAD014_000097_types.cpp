// ----------- ZAD97 -----------
//(types) Napisz program, który pobierze z parametru liczby rzeczywiste i wydrukuje ich iloczyn. Wynik wydrukuj na standardowe wyjscie.

//./parametr 1.5 3 1 ➞ WYDRUKUJE: "4.5"
//./parametr 2 11.11 1 2.0 ➞ WYDRUKUJE: "44.44"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc,char** argv) {
	double multiple = 1;
	for(int i = 1; i < argc; ++i) {
		multiple = multiple * std::stod(argv[i]);
	}	
	std::cout << multiple << "\n";
return 0;
}
// ROZWIĄZANIE KONIEC
