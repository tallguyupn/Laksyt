#include <iostream>
#include <cmath>


int main(){
    int final;
    int luku = 0; 
    //Final muuttuja on viimeinen m, minkä 

    std::cout << "Anna luku: ";
    std::cin >> final;

    if (remainder(final, 3) != 0)
    {
        std::cout << "\n" << "Ei ole jaollinen kolmella" << "\n";
    }
    else{
        while ( luku < final) {
           std::cout << luku << ", ";
           luku=luku+3;
        }
        std::cout << final << ".";
    }   return 0;
}