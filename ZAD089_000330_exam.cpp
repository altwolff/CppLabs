// ----------- ZAD330 -----------
//(exam) 
//// Dopisz do istniejącego kodu fragment tak aby program drukował wskazany wynik
//// Nie używaj drukowania
//// Możesz dopisać kod wyłącznie w wyznaczonym miejscu
//// Program ma drukwać następujący wzór:

//// ./choinka 1 ➞ WYDRUKUJE: 
////1

//// ./choinka 5 ➞ WYDRUKUJE: 
////5 5 5 5 5
//// 4 4 4 4
////  3 3 3
////   2 2
////    1

//  

#include <iostream>

void prin(int l){
	if (l<0){
		std::cout << "\n";
		return;
	}
	if (l)
		std::cout << l;
	std::cout << " ";
}
int main(int argc, char* argv[])
{
	int rows = std::stoi(argv[1]);
	
	for(int i=1;i<=rows;i++)
	{
// ROZWIĄZANIE POCZATEK
for(int j = 1; j <= i-1 ; j++) {

			prin(0);
		}
		for(int j = rows + 1 - i; j >= 1; j--) {
			prin(rows + 1 - i);
		}
			prin(-1);
// ROZWIĄZANIE KONIEC
	}
}