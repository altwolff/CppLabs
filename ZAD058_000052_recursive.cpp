// ----------- ZAD52 -----------
//(recursive) Zrób zadanie 24 używając rekurencji
//Napisz program, który wydrukuje kwadratową macierz z zerami na głównej przekątnej, jedynkami tuż nad i pod główną przekątną, dalej dwójkami itd. Wielkość macierzy ma być podowana w parametrze programu

//./matrix 8 ➞ WYDRUKUJE:
//0 1 2 3 4 5 6 7
//1 0 1 2 3 4 5 6
//2 1 0 1 2 3 4 5
//3 2 1 0 1 2 3 4
//4 3 2 1 0 1 2 3 
//5 4 3 2 1 0 1 2
//6 5 4 3 2 1 0 1  
//7 6 5 4 3 2 1 0 



// ROZWIĄZANIE POCZATEK
#include <iostream>

void matrix(int argc, char** argv, int i = 0, int j = 0) {
	if (j >= std::stoi(argv[1])) {
		i++;
		j = 0;
		std::cout << std::endl;
	}
	if (i >= std::stoi(argv[1])) {
		return;
	}
	std::cout << abs(i - j) << " ";
	matrix(argc, argv, i, j + 1);
}

int main(int argc, char** argv) {
	matrix(argc, argv);
}
// ROZWIĄZANIE KONIEC
