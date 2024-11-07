#include <iostream>
#include <cmath>

//kirjastot mitä tarvitaan, en mainitse niitä jokaisessa kohdassa

/*1. X parillisuutta voidaan katsoa komennolla "remainder".
Komento saadaan cmath kirjastolla. Komento menee näin: */

void ensimmäinen(){ //Käytän void komentoa tehdäkseni useamman funktion
    int x;
    std::cout << "\n" << "anna numero: "; 
    std::cin >> x; 

    float y = remainder(x, 2.0);
    if ('y' != 0){
        std::cout << "\n" << "Ei ole jaollinen" << "\n";
    }
    else{
        std::cout << "\n" << "On jaollinen" << "\n";
    }
    /*if lause katsoo, jos jakojäännös on 0. 
    jos se on, niin se tulostaa "on jaollinen".
    Jos ei, niin se tulostaa "Ei ole jaollinen".*/
}

/*2. Tämä voidaan katsoa taas yksinkertaisella
komennolla*/


 void toinen(){
    float y;  //y muuttuja
    std::cout << "\n" << "anna numero: ";
    std::cin >> y;

    if (-3 < y <0){
        std::cout << "\n" << "Tämä on tosi" << "\n";
    }
    else {
        std::cout << "\n" << "Tämä ei ole tosi" << "\n";
    }

    /*if lause katsoo, onko muuttuja y suurempi, kuin -3,
    mutta pienempi, kuin 0*/
 }

/* 3. TÄmä onglema voidaan ratkaista taas if else lauseella*/

 void kolmas(){
    float x;
    float y;
    float z;

    std::cout << "\n" << "Anna numero: ";
    std::cin >> x;
    std::cout << "Anna toinen numero: ";
    std::cin >> y;
    std::cout << "Anna kolmas numero: ";
    std::cin >> z;

    if (z<=x) {
        std::cout << "\n" << "z ei ole suurempi, kun x" << "\n";
    }
    else if (y-1<=z) {
        std::cout << "\n" << "z ei ole pienempi, kuin y-1" << "\n";
    }
    else{
        std::cout << "\n" << "Lauseke totutui" << "\n";
    }
 } /*else if lauseet eivät ole suositeltavia, kun työskennellään valinnan kanssa
 Lisää tietoa main funktiossa*/



int main (){
    int valinta;
    std::cout << "Minkä kohdan haluat suorittaa?: ";
    std:: cin >> valinta;

    switch(valinta){
        case '1':
            ensimmäinen();
            return 0;
            break;
        
        case '2':
            toinen();
            return 0;
            break;

        case '3': 
            kolmas();
            return 0;
            break;
    }
    /*Switch komento on tehokkaampi verrattuna useampaan else if komentoon*/
}