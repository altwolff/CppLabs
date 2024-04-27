// ----------- ZAD16 -----------
//(loop) Napisz program, który pobierze z parametrów liczbę naturalną w, reprezentującą długość ramienia. Wydrukuj trójkąt prostokątny równoramienny z gwiazdek o wymiarze podanym w parametrze

//./rectangulartriangle 3 ➞ WYDRUKUJE: 
//*
//**
//***


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc,char** argv) {
    int height = std::stoi(argv[1]);
    int width = 0;
    for(int h = 0; h < height; ++h) {
        width = width + 1;
        for(int w = 0; w < width; ++w) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
return 0;
}
// ROZWIĄZANIE KONIEC
