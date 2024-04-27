// ----------- ZAD7 -----------
//(loop) Napisz program, który pobierze z parametru liczbę naturalną N, a następnie wydrukuje tyle gwiadek ile wynosi N. Wymiar nie może być mniejszy niż 0. Wynik wydrukuj na standardowe wyjście

//./allstars 4 ➞ WYDRUKUJE: "****"


// ROZWIĄZANIE POCZATEK
#include <iostream>
int main(int argc, char** argv){
	for(int i=0; i<std::stoi(argv[1]); ++i){
		std::cout << "*";
	}
return 0;
}
// ROZWIĄZANIE KONIEC
