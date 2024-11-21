#include <iostream>

// Funktio lukee luvun väliltä n ja m
int lueLukuValilta(int n, int m) {
    // Alkuehto: n <= m
    if (n > m) {
        std::cerr << "Virhe: alaraja ei voi olla suurempi kuin yläraja." << std::endl;
        return -1; // Virheellinen paluuarvo
    }

    int luku;
    while (true) {
        std::cout << "Anna luku väliltä " << n << "..." << m << ": ";
        std::cin >> luku;

        if (luku >= n && luku <= m) {
            return luku; // Palautetaan kelvollinen luku
        } else {
            std::cout << "Luku ei ole sallitulla välillä. Yritä uudelleen." << std::endl;
        }
    }
}

int main() {
    // Käytetään funktiota lukemaan luku väliltä 1...10
    int k = lueLukuValilta(1, 10);
    if (k != -1) {
        std::cout << "Syötit luvun: " << k << std::endl;
    }
    return 0;
}