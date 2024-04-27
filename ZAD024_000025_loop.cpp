// ----------- ZAD25 -----------
//(loop) Napisz program, który wyświetli za pomocą cyfr wzór w postaci trójkąta prostokątnego z wyrównaniem do prawej tak jak podano na przykładzie. Parametrem programu jest wysokość trójkąta
//./halftree 5 ➞ WYDRUKUJE:
//    1
//   21
//  321
// 4321
//54321


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char** argv) {
    int height = std::stoi(argv[1]);
    for (int i = 1; i <= height; i++) {
        for (int k = 0; k < height - i; k++) {
            std::cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            std::cout << j;
        }
        std::cout << "\n";
    }
    return 0;
}
// ROZWIĄZANIE KONIEC
