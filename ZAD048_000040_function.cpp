// ----------- ZAD40 -----------
//(function) Dopisz do istniejącego kodu funkcję podmien_literki tak aby program drukował wskazany wynik
//Nie używaj cout wewnątrz funkcji
//W rozwiązanie wklej wyłącznie funkcję – nie cały program
//Program ma drukować string "heppo hello"

#include <iostream>
#include <string>
// ROZWIĄZANIE POCZATEK
std::string podmien_literki(std::string x, int y, int z) {
    std::string phrase;
    for (int i = 0; i < x.length(); i++) {
        phrase += x[i];
        if (x[i] == y) {
            phrase += z;
            phrase.erase(i, 1);
        }
    }
    return phrase;
}
// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]){
	char s1[] = "hello";
	std::cout << podmien_literki (s1, 'l', 'p') << ' ';
	std::cout << s1 << '\n';
}