#include <iostream>
#include <string>

int määrä (const std::string& jees, char ch);

int main () {
    std::string jees;
    char x;
    std::cout << "Hei\nAnna merkkijono: ";
    
    //Tulee käyttää getline komentoa sillä std::cin tulostaisi ainoastaan ensimmäisen sanan
    std::getline (std::cin, jees);
    std::cout << "\nMitä merkkiä haluaisit etsiä: ";
    std::cin >> x;
    int Esiintyminen = määrä(jees, x);
    std::cout << "\nMerkki " << x << " Esiintyy merkkijonossa " << Esiintyminen << " Kertaa" << std::endl; 
}


int määrä (const std::string& jees, char ch){
    int count = 0;
    //Etsitään se tietty kirjain
    for (char c : jees) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}
