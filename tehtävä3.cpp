#include <iostream>

int main (){
    float x;
    float y;
    float z;

    //Kolme ensimmäistä muuttujaa, joihin numerot tullaan säilyttämään


    std::cout << "Hei, anna ensimmäinen luku: ";
    std::cin >> x;
    std::cout << "\n" << "anna toinen luku: ";
    std::cin >> y;
    std::cout << "\n" << "anna viimeinen luku: "; << "\n"
    std::cin >> z;

    //Output ja input

    std::cout << "Lukujen tulo on: " << x*y*z << "\n";
    std::cout << "Lukujen summa on: " << x+y+z << "\n";
    std::cout << "Lukujen keskiarvo on: " << (x+z+y)/3 << "\n"; 
}