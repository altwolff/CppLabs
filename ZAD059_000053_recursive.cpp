// ----------- ZAD53 -----------
//(recursive) Zrób zadanie używając rekurencji
//Napisz program, który wydrukuje znak karo gwiazdkami,  w parametrze programu podana jest wysokość/2

//./karo 5 ➞ WYDRUKUJE: 
//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *



// ROZWIĄZANIE POCZATEK
#include<iostream>

void druk(int x, char y) {
    if (x == 0) {
        return;
    }
    std::cout << y;
    druk(x - 1, y);
}

void carreau(int z, int &i, int &j, bool r) {
    if (r) {
        if (i < 0) {
            return;
        }
    } else if (i > z * 2) {
        return;
    }
    if (r) {
        druk(j, ' ');
        druk(i, '*');
        std::cout << std::endl;
        j++;
        i -= 2;
        carreau(z, i, j, r);
    } else {
        druk(j, ' ');
        druk(i, '*');
        std::cout << std::endl;
        j--;
        i += 2;
        carreau(z, i, j, r);
    }
}

int main(int argc, char **argv) {
    int j = std::stoi(argv[1]) - 1;
    int i = 1;
    carreau(std::stoi(argv[1]), i, j, 0);
    j = 1;
    i = (std::stoi(argv[1]) * 2) - 3;
    carreau(std::stoi(argv[1]), i, j, 1);
}
// ROZWIĄZANIE KONIEC
