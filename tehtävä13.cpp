#include <iostream>
#include <cstdlib> //rand ja srand
#include <ctime> //time
void Gen (int a, int b, int n);

int main (){
  int a;
  int b;
  int n;

  //Alustetaan satunnais generaattori
  srand(time(0));

  std::cout << "Mikä on minimi luku: ";
  std::cin >> a;
  std::cout << "\nMikä on maksimi luku: ";
  std::cin >> b;
  std::cout << "\nKuinka monta lukua tulostetaan: ";
  std::cin >> n;

  if (a >= b) {
    std::cout << "\nVirhe. Alaraja on pienempi, kuin yläraja" << std::endl;
    return 1;
  }

  Gen(a, b, n);
  return 0;
}

//funktio, joka tulostaa luvut
void Gen (int a, int b, int n){
  for (int i = 0; i < n; i++){
    //tulostetaan satunnainen luku a:n ja B:n väliltä
    int Randomi = rand() % (b - a + 1) + a;
    std::cout << Randomi << " ";
  }
}

