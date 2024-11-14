#include <iostream>

// Funktio, joka palauttaa kahdesta luvusta pienimmän
double min2(double a, double b) {
    return (a < b) ? a : b;
}

// Funktio, joka palauttaa kolmesta luvusta pienimmän
double min3(double a, double b, double c) {
    return min2(min2(a, b), c);
}

// Funktio, joka palauttaa neljästä luvusta pienimmän
double min4(double a, double b, double c, double d) {
    return min2(min3(a, b, c), d);
}

int main() {
    // Testataan min2-funktiota
    double a = 5.6, b = 3.4;
    std::cout << "Pienin luvuista " << a << " ja " << b << " on: " << min2(a, b) << std::endl;

    // Testataan min3-funktiota
    double c = 7.2;
    std::cout << "Pienin luvuista " << a << ", " << b << " ja " << c << " on: " << min3(a, b, c) << std::endl;

    // Testataan min4-funktiota
    double d = 2.9;
    std::cout << "Pienin luvuista " << a << ", " << b << ", " << c << " ja " << d << " on: " << min4(a, b, c, d) << std::endl;

    return 0;
}