// ----------- ZAD14 -----------
//(loop) Napisz program, który pobierze z parametrów dwie liczby naturalne w i h, reprezentujące szerokość i wysokość. Wydrukuj pusty w środku prostokąt z gwiazdek o wymiarach podanych w parametrach

//./emptyrectangle 5 4 ➞ WYDRUKUJE: 
//*****
//*   *
//*   *
//*****


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc,char** argv) {
	int width = std::stoi(argv[1]);
	int height = std::stoi(argv[2]);
	for(int w = 0; w < width; ++w)
		std::cout << "*";
	std::cout << "\n";
	for(int h = 0; h < height - 2; ++h) {
		std::cout << "*";
		for(int w = 0; w < width - 2; ++w)
			std::cout << " ";
		std::cout << "*";
		std::cout << "\n";
	}
	for(int w = 0; w < width; ++w)
		std::cout << "*";
return 0;
}
// ROZWIĄZANIE KONIEC
