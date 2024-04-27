// ----------- ZAD65 -----------
//(class) 
////Napisz klasę choinki tak aby program działał
////(rozwiązaniem jest tylko brakujący kod)

////(Zadanie podobne do 43)
////./choinka 3 ➞ WYDRUKUJE:
////  *
//// ***
////*****


#include <iostream>
using namespace std;

// ROZWIĄZANIE POCZATEK
class ChristmasTree {
	private:
		int qq;
	public:
		ChristmasTree(int q) {
			qq = q;
		}
		void draw() {
			for (int i = 1; i <= qq; i++) {
				for (int j = 1; j <= qq - i; j++) {
					std::cout << " ";
				}
				for (int k = 1; k < 2 * i; k++) {
					std::cout << "*";
				}
				std::cout << std::endl;
			}
		}
};
// ROZWIĄZANIE KONIEC


int main(int argc, char* argv[])
{
	// Sprawdzenie, czy liczba argumentów jest odpowiednia
	if (argc != 2){
		cout << "Nieprawidłowa liczba argumentów!" << endl;
		return 1;
	}
	ChristmasTree tree(stoi(argv[1]));
	tree.draw();
}