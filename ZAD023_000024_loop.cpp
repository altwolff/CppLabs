// ----------- ZAD24 -----------
//(loop) Napisz program, który wydrukuje kwadratową macierz z zerami na głównej przekątnej, jedynkami tuż nad i pod główną przekątną, dalej dwójkami itd. Wielkość macierzy ma być podowana w parametrze programu

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

int main(int argc,char** argv) {
    int matrixSize = std::stoi(argv[1]);
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++){
            std::cout << abs(i - j) << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
// ROZWIĄZANIE KONIEC
