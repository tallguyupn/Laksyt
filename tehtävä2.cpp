#include <iostream>
#include <cmath>

//kirjastot mitä tarvitaan, en mainitse niitä jokaisessa kohdassa

/*1. X parillisuutta voidaan katsoa komennolla "remainder".
Komento saadaan cmath kirjastolla. Komento menee näin: */

void ensimmäinen(){ //Käytän void komentoa tehdäkseni useamman funktion
    int x;
    std::cout << "anna numero: "; 
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
    std::cout << "anna numero: ";
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


 void kolmas(){
    
 }

