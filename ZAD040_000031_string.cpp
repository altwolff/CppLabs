// ----------- ZAD31 -----------
//(string) Strasznie nie lubię węży! Dlatego nie podoba i się że ci pajtonowcy piszą wszytko Snake casem.
//Napisz mi program który przekonwertuje SnakeCase do CamelCase.
//Przekonwertuj pierwszy argument programu, napisany snakecase do CamelCase i wydrukuj.

//Przykład 
//./snakes-sucks "is_modal_open" ➞ WYDRUKUJE: "isModalOpen"
//./snakes-sucks "follow_the_white_rabbit" ➞ WYDRUKUJE: "followTheWhiteRabbit"


// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char **argv) {
    std::string snakeCase = argv[1];
    for (int i = 0; i < snakeCase.length(); i++) {
        int ascii = snakeCase[i];
        if (ascii == 95) {
            snakeCase[i+1] -= 32;
            snakeCase.erase(i,1);
        }
    }
    std::cout << snakeCase << std::endl;
    return 0;
}
// ROZWIĄZANIE KONIEC
