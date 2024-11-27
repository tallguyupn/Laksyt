#include <iostream>

int* kopioiTaulukko(const int* ori, int koko);

int main() {
    // Esimerkkitaulukko
    int ori[] = {1, 2, 3, 4, 5};
    int koko = sizeof(ori) / sizeof(ori[0]);

    // Kopioidaan taulukko
    int* kopio = kopioiTaulukko(ori, koko);

    // Tulostetaan kopion arvot
    std::cout << "Kopion arvot: ";
    for (int i = 0; i < koko; ++i) {
        std::cout << kopio[i] << " ";
    }
    std::cout << std::endl;

    // Vapautetaan muisti
    delete[] kopio;

    return 0;
}


int* kopioiTaulukko(const int* ori, int koko) {
    // Allokoidaan uusi taulukko
    int* kopio = new int[koko];
    
    // Kopioidaan alkuperäisen taulukon arvot uuteen taulukkoon
    for (int i = 0; i < koko; ++i) {
        kopio[i] = ori[i];
    }
    
    // Palautetaan osoitin kopioon
    return kopio;
}