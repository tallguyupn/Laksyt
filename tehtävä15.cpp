#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


double laskeKeskipituus(const std::vector<std::string>& sanat);
void etsiLyhinJaPisinSana(const std::vector<std::string>& sanat, std::string& lyhin, std::string& pisin);

int main() {
    std::string sana;
    std::string kaikkiSanat;
    std::vector<std::string> sanat; // Tallennetaan sanat listaan

    std::cout << "Kirjoita sanoja (kirjoita 'lopeta' lopettaaksesi)";

    while (true) {
        std::cout << "\nAnna sana: ";
        std::cin >> sana;

        if (sana == "lopeta") {
            break; // Lopetetaan silmukka
        }

        sanat.push_back(sana); // Lisätään sana listaan

        // Lisätään sana lauseeseen
        if (!kaikkiSanat.empty()) {
            kaikkiSanat += " "; // Lisätään välilyönti sanojen väliin
        }
        kaikkiSanat += sana;
    }

    // Tulostetaan kaikki sanat
    std::cout << "\nAnnoit sanat: " << kaikkiSanat;

    // Lasketaan ja tulostetaan sanojen keskipituus
    double keskipituus = laskeKeskipituus(sanat);
    std::cout << "\nSanojen keskipituus: " << keskipituus;

    // Löydetään ja tulostetaan lyhyin ja pisin sana
    std::string lyhinSana, pisinSana;
    etsiLyhinJaPisinSana(sanat, lyhinSana, pisinSana);
    std::cout << "\nLyhin sana: " << lyhinSana;
    std::cout << "\nPisin sana: " << pisinSana << std::endl;

    return 0;
}


// Funktio laskee sanojen keskipituuden
double laskeKeskipituus(const std::vector<std::string>& sanat) {
    if (sanat.empty()) {
        return 0.0; // Jos ei ole sanoja, keskipituus on 0
    }

    int yhteispituus = 0;
    for (const auto& sana : sanat) {
        yhteispituus += sana.length();
    }
    return static_cast<double>(yhteispituus) / sanat.size();
}

// Funktio löytää lyhyimmän ja pisimmän sanan
void etsiLyhinJaPisinSana(const std::vector<std::string>& sanat, std::string& lyhin, std::string& pisin) {
    if (sanat.empty()) {
        lyhin = "";
        pisin = "";
        return;
    }

    lyhin = *std::min_element(sanat.begin(), sanat.end(), 
        [](const std::string& a, const std::string& b) {
            return a.length() < b.length();
        });

    pisin = *std::max_element(sanat.begin(), sanat.end(), 
        [](const std::string& a, const std::string& b) {
            return a.length() < b.length();
        });
}