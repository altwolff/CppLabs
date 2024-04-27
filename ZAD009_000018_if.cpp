// ----------- ZAD18 -----------
//(if) Jako parametry zostaną przekazane trzy liczby całkowite
//Napisz program, który posortuje rosnąco trzy liczby całkowite przekazane jako argument programu
//Nie używaj pętli

//./minisort 5 -2 1 ➞ WYDRUKUJE: "-2 1 5"


// ROZWIĄZANIE POCZATEK
#include <iostream>
int main(int argc, char* argv[]) {
    int N1 = std::stoi(argv[1]);
    int N2 = std::stoi(argv[2]);
    int N3 = std::stoi(argv[3]);
    if (N1 > N2) std::swap(N1, N2);
    if (N1 > N3) std::swap(N1, N3);
    if (N2 > N3) std::swap(N2, N3);
    std::cout << N1 << " " << N2 << " " << N3;
    return 0;
}
// ROZWIĄZANIE KONIEC
