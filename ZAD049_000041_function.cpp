// ----------- ZAD41 -----------
//(function) Dopisz do istniejącego kodu funkcję podmien_literki tak aby program drukował wskazany wynik
//Nie używaj cout wewnątrz funkcji
//W rozwiązanie wklej wyłącznie funkcję – nie cały program
//Program ma drukować string "heppo heppo"

#include <iostream>
#include <string>
// ROZWIĄZANIE POCZATEK
std::string podmien_literki(char* x, char y, char z) { 
	std::string phrase = x;
    for (int i = 0; i < phrase.length(); i++) {
        if (x[i] == y) {
            x[i] = z;
        }
    }
    return x;
}  
// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]){
	char s1[] = "hello";
	std::cout << podmien_literki (s1, 'l', 'p') << ' ';
	std::cout << s1 << '\n';
}