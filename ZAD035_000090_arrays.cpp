// ----------- ZAD90 -----------
//(arrays) Jako parametr przekazana jest liczba binarna
//Wydrukuj reprezentację dziesiętną przekazanej w argumecie liczby

//./binary 1011 ➞ WYDRUKUJE: "11"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv) {
	std::string a = argv[1];
	int b = 0;
	for (int i = 0;i < a.length(); i++) {
		b = b * 2 + (a[i] != '0');
	}
	std::cout << b << std::endl;
	return 0;
}
// ROZWIĄZANIE KONIEC
