// ----------- ZAD66 -----------
//(class) 
////Napisz klasę Person tak aby program działał
////(rozwiązaniem jest tylko brakujący kod)

////./osoba ➞ WYDRUKUJE:
////Osoba: Jan Kowalski
////Wiek: 30



#include <iostream>
#include <string>

// ROZWIĄZANIE POCZATEK
class Person {
private:
    std::string firstName;
    std::string lastName;
    int age;

public:
    Person(std::string first, std::string last, int age)
            : firstName(first), lastName(last), age(age) {}
    std::string getName() {
        return firstName + " " + lastName;
    }
    int getAge() {
        return age;
    }
};
// ROZWIĄZANIE KONIEC

int main() {
	// Tworzenie obiektu osoby o imieniu Jan, nazwisku Kowalski i wieku 30
	Person person("Jan", "Kowalski", 30);

	// Wypisywanie imienia i nazwiska osoby
	std::cout << "Osoba: " << person.getName() << std::endl;

	// Wypisywanie wieku osoby
	std::cout << "Wiek: " << person.getAge() << std::endl;

	return 0;
}