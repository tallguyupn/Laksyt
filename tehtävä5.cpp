#include <iostream>

void pr(){
    int määrä;
    char merkki;
    std::cout << "Kuinka monta merkkiä?: ";
    std::cin >> määrä;
    std::cout << "\n Mitä merkkiä halutaan tulostaa?: ";
    std::cin >> merkki;
}

int main(){
    int origin = 20; 
    pr();
    määrä - origin;
}
