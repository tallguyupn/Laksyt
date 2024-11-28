#include <iostream>
#include <vector>
//vektori tarvitaan, jotta voidaan saada taulukko jonka pituutta voidaan muuttaa
#include <algorithm> //std::min element ja max element


void luvut(std::vector<double>& fun, int size);
double SP(const std::vector<double>& fun); 

int main(){
    //vektorin koko ja itse vektori
    int size;
    std::vector<double> fun;

    std::cout << "Kuinka suuri taulukon tulee olla: ";
    std::cin >> size;
    luvut(fun, size);

    std::cout << "\nVektorin arvot ovat: ";
    //tämänlainen for silmukka on pakollinen vektorien arvon tulostamiseen
    for (double arvo : fun) {
        std::cout << arvo << " "; 
    }
    std::cout << std::endl;

    double erotus = SP(fun);
    std::cout << "Suurimman ja pienimmän luvun erotus on " << erotus << std::endl;
    return 0;
}


//funktio mikä lisää vektroiin arvoja
void luvut(std::vector<double>& fun, int size){
    std::cout << "\nSyötä haluamiasi luku: ";
     // Käydään silmukassa läpi ja lisätään arvot
    for (int i = 0; i < size; ++i) {
        double arvo;
        std::cout << "Anna arvo " << i + 1 << ": ";
        std::cin >> arvo;
        fun.push_back(arvo); // Lisätään arvo vektoriin
    }
}

//funktio mikä laskee vektorin suurimman ja pienimmän luvun erotukset
double SP (const std::vector<double>& fun){
    //kirjoitetaan ensin virheen tarkistus
    if (fun.empty()) {
        std::cerr << "Taulukko on tyhjä, ei voida laskea \n";
        return 0;
    }
    double suurin = *std::max_element(fun.begin(), fun.end());
    double pienin = *std::min_element(fun.begin(), fun.end());
    return suurin - pienin;
}