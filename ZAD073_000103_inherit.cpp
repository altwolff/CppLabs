// ----------- ZAD103 -----------
//(inherit) Dodaj brakujący kod
//./inherit Leszek ➞ WYDRUKUJE:
//Leszek is eating.
//Leszek is barking.


#include <iostream>
// ROZWIĄZANIE POCZATEK
class Animal {
	public:
		std::string name;
		void eat() {
			std::cout << name << " is eating.\n";
		}
};

class Dog : public Animal {

	public:
		Dog(std::string n) {
			name = n;
		}

		void bark() {
			std::cout << name << " is barking.";
		}
};
// ROZWIĄZANIE KONIEC
int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: program [name]" << std::endl;
        return 1;
    }

    Animal* dog = new Dog(argv[1]);
    dog->eat();
    ((Dog*)dog)->bark();

    delete dog;  // Pamiętaj o zwolnieniu pamięci
}