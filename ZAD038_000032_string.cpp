// ----------- ZAD32 -----------
//(string) Zaparkowałeś samochód na parkingu i chcesz obliczyć całkowity koszt biletu.
//Zasady rozliczeń są następujące:
//	Opłata za wjazd na parking wynosi 2;
//	Pierwsza rozpoczęta godzina kosztuje 3;
//	Każda kolejna rozpoczęta godzina kosztuje 4.
//Wjechałeś na parking o godzinie E i wyjechałeś o godzinie L.
//Czasy są reprezentowane jako ciągi w formacie „GG:MM”
//(gdzie „GG” to dwucyfrowa liczba z zakresu od 0 do 23, która oznacza godziny, a „MM” to dwucyfrowa liczba z zakresu od 0 do 59, oznaczająca minuty).
//Program ma wydrukować całkowity koszt rachunku za parking od wjazdu w czasie E do wyjazdu w czasie L.
//Program przyjmuje E i L w parametrach programu

//Np.
//./parking 10:00 13:21 ➞ WYDRUKUJE: 17
//./parking 09:42 11:42 ➞ WYDRUKUJE: 9

//Możesz założyć, że:
//godziny E i L są zawsze w formacie „GG:MM”;
//E < L i są tego samego dnia.



// ROZWIĄZANIE POCZATEK
#include <iostream>

int main(int argc, char **argv) {
    std::string entryTime = argv[1];
    std::string exitTime = argv[2];
    int entryHour = std::stoi(entryTime.substr(0, 2));
    int exitHour = std::stoi(exitTime.substr(0, 2));
    int entryMinute = std::stoi(entryTime.substr(3, 2));
    int exitMinute = std::stoi(exitTime.substr(3, 2));
    int totalMinutes = (((exitHour - entryHour) * 60) + (exitMinute - entryMinute)) - 60;
    int totalCost = 5;
    if (totalMinutes > 0) {
        int extraHours = (totalMinutes + 59) / 60;
        totalCost += extraHours * 4;
    }
    std::cout << totalCost << std::endl;
    return 0;
}
// ROZWIĄZANIE KONIEC
