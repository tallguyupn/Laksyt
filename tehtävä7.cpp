/*Kaikki nämä funktiot ovat yksinkertaisia ymmärtää. Siksi niissä ei ole kommenteja*/


#include <iostream>

void Forri();
void Whille();
void Dille();

int main(){
    int i=10;

    std::cout << "For silmukka \n";

    Forri();

    std::cout << "\n While silmukka\n";

    Whille();

    std::cout << "\n Do while silmukka\n";

    Dille();
    return 0;

}
void Forri(){
    for (int i = 10; i <= 30; i+=2)
    {
       std::cout << i << "\n";
    }
    
}

void Whille(){
    int i=10;
    while (i<=30){
        std::cout << i << "\n";
        i+=2; 
    }
}

void Dille(){
    int i=10;
    do{
        std::cout << i << "\n";
        i+=2;
    }
    while (i<=30);
}