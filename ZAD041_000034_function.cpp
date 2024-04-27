// ----------- ZAD34 -----------
//(function) Napisz program, który przyjmie w argumentach dwie liczby, porówna je i wyświetli maksimum.
//Zadeklaruj funkcję o nazwie max_two, która porównuje liczby i zwraca maksimum.
//./max 1 2 ➞ WYDRUKUJE: 2


// ROZWIĄZANIE POCZATEK
#include <iostream>

int max_two(int a, int b) {
    return (a > b) ? a : b;
}

int main(int argc, char **argv) {
    int i = std::stoi(argv[1]);
    int j = std::stoi(argv[2]);
    int answer = max_two(i, j);
    std::cout << answer << std::endl;
    return 0;
}
// ROZWIĄZANIE KONIEC
