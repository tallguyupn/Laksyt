#include <iostream>
#include <string>
#include <unordered_map>

void korvaaMerkit(std::string& teksti, const std::unordered_map<char, char>& korvaukset);


int main() {
    std::string syotettyTeksti;
    std::unordered_map<char, char> korvaukset;
    int maara;

    std::cout << "Anna tekstipätkä: ";
    std::getline(std::cin, syotettyTeksti);

    std::cout << "Kuinka monta merkkiä haluat korvata? ";
    std::cin >> maara;
    std::cin.ignore(); // Poistetaan rivinvaihto puskureista

    for (int i = 0; i < maara; ++i) {
        char alkuperainen, uusiMerkki;
        std::cout << "Anna korvattava merkki: ";
        std::cin >> alkuperainen;
        std::cout << "Anna uusi merkki: ";
        std::cin >> uusiMerkki;
        korvaukset[alkuperainen] = uusiMerkki;
    }

    korvaaMerkit(syotettyTeksti, korvaukset);

    std::cout << "Korvattu teksti: " << syotettyTeksti << std::endl;

    return 0;
}

void korvaaMerkit(std::string& teksti, const std::unordered_map<char, char>& korvaukset) {
    for (char& merkki : teksti) {
        if (korvaukset.find(merkki) != korvaukset.end()) {
            merkki = korvaukset.at(merkki);
        }
    }
}