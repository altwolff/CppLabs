// ----------- ZAD1 -----------
//(if) Jako argument programu będzie podana intensywność wybuchu czyli liczba całkowita "n".
//Program ma wydrukować "Boom", w konfiguracji zależnej od poniższych warunków:
//- Drukowany tekst powinien zawierać n znaków "o",
//	chyba, że n jest mniejsze niż 2 – w takim wypadku powinien wydrukować "boom" bez sprawdzania pozostałych warunków
//- Jeśli n jest podzielne na 2 dodaj na końcu wykrzyknik
//- Jeśli n jest podzielne na 5 wszytko powinno być drukowane KAPSLOKIEM

//Nie korzystaj ze Stringów

//Przykład:
//	./boom 1 ➞ WYDRUKUJE: "boom"
//	./boom 4 ➞ WYDRUKUJE: "Boooom!"
//	./boom 5 ➞ WYDRUKUJE: "BOOOOOM"
//	./boom 10 ➞ WYDRUKUJE: "BOOOOOOOOOOM!"


// ROZWIĄZANIE POCZATEK
#include <iostream>
using namespace std;
int main(int argc, char** argv){
	int n = stoi(argv[1]);
	if (n < 2) {
		cout << "boom\n";
		return 0; 
	}
	cout << "B";
	if(n % 5) {
		for(int i=0; i<n; ++i)
			cout << "o";
			cout << "m";
	} else {
		for(int i=0; i<n; ++i)
			cout << "O";
			cout << "M";
	}
	if (!(n % 2)) {
		cout << "!";
		return 0;
	}
}
// ROZWIĄZANIE KONIEC
