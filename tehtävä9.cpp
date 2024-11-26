#include <iostream>
#include <cmath>

bool onkoAlkuluku(int luku);

int main() {
    int luku;
    char jatka;

    do {
        std::cout << "Anna luku: ";
        std::cin >> luku;

        if (onkoAlkuluku(luku)) {
            std::cout << luku << " on alkuluku.\n";
        } else {
            std::cout << luku << " ei ole alkuluku.\n";
        }

        std::cout << "Haluatko jatkaa? (k/e): ";
        std::cin >> jatka;
    } while (jatka == 'k' || jatka == 'K');

    std::cout << "Ohjelma päättyi." << std::endl;

    return 0;
}



//Funktio, joka tarkistaa onko luku alkuluku
bool onkoAlkuluku(int luku) {
    if (luku <= 1) {
        return false; // Negatiiviset luvut, 0 ja 1 eivät ole alkulukuja
    }
    if (luku <= 3) {
        return true; // 2 ja 3 ovat alkulukuja
    }
    if (luku % 2 == 0 || luku % 3 == 0) {
        return false; // Jaolliset 2:lla tai 3:lla eivät ole alkulukuja
    }

    // Tarkista jaollisuus muilla luvuilla
    for (int i = 5; i <= std::sqrt(luku); i += 6) {
        if (luku % i == 0 || luku % (i + 2) == 0) {
            return false;
        }
    }

    return true; // Luku on alkuluku
}