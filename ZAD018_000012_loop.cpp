// ----------- ZAD12 -----------
//(loop) Napisz program, który pobierze z parametrów dwie liczby naturalne w i h, reprezentujące szerokość i wysokość. Wydrukuj prostokąt z gwiazdek o wymiarach podanych w parametrach

//./rectangle 3 4 ➞ WYDRUKUJE: 
//***
//***
//***
//***


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc,char** argv) {
	int width = std::stoi(argv[1]);
	int height = std::stoi(argv[2]);
	for(int h=0; h<height; ++h){
		for(int w=0; w<width; ++w)
			std::cout << "*";
		std::cout << "\n";
	}
}
// ROZWIĄZANIE KONIEC
