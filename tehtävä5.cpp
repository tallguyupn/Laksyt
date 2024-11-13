#include <iostream>

// Funktio, joka tulostaa annetun merkin määrätyn määrän peräkkäin
void tulostaMerkit(int maara, char merkki) {
    for (int i = 0; i < maara; i++) {
        std::cout << merkki;
    }
}

int main() {
    int n;
    char merkki;

    // Käyttäjältä kysytään kuvion koko ja merkki
    std::cout << "Anna kuvion korkeus (enintään 20): ";
    std::cin >> n;
    std::cout << "Anna merkki: ";
    std::cin >> merkki;

    // Tarkistetaan, että n on korkeintaan 20
    if (n > 20) {
        std::cout << "Kuvion korkeus voi olla enintään 20. \n";
        return 1;
    }

    // Tulostetaan kuvio
    for (int i = n; i > 0; i--) {
        tulostaMerkit(i, merkki);
        std::cout << std::endl;
    }

    return 0;
}