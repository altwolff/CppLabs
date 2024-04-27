// ----------- ZAD15 -----------
//(loop) Napisz program, który pobierze z parametrów liczbę rzeczywistą r, reprezentującą promień. Wydrukuj koło z gwiazdek o promieniu podanym w parametrze.
//Nalerzy wykorzystać odległość punktu od punktu lub równanie okręgu (na to samo wyjdzie)
//Wydrukuj dwie gwiazdki poziomo na każdą jednostkę, żeby było bardziej okrągłe


//	./circle 2.5 ➞ WYDRUKUJE: 
//  ******  
//**********
//**********
//**********
//  ******  

//	./circle 3.5 ➞ WYDRUKUJE: 
//    ******	
//  **********  
//**************
//**************
//**************
//  **********  
//    ******	

//	./circle 4.5 ➞ WYDRUKUJE: 
//    **********	
//  **************  
//******************
//******************
//******************
//******************
//******************
//  **************  
//    **********  


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv) {
	double radius = std::stod(argv[1]);
	for (int i = - radius; i <= radius; i++) {
		for (int j = - radius; j <= radius; j++) {
			if ((i*i) + (j*j) < (radius*radius)) {
				std::cout << "**";
			} else {
				std::cout << "  ";
			}
		}
		std::cout << "\n";
	}
	return 0;
}
// ROZWIĄZANIE KONIEC
