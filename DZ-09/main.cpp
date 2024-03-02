#include <iostream>
#include "KompleksniBroj.h"

int main(void){
    Kompleksni_Broj z(2, 3);
    Kompleksni_Broj w(4, 5);

    std::cout << "Moduo Z: " << z.moduo() << std::endl;
    std::cout << "Moduo W: " << w.moduo() << std::endl;

    std::cout << "Konjugovano Z: " << z.konjugovano() << std::endl;
    std::cout << "Konjugovano W: " << w.konjugovano() << std::endl;

    Kompleksni_Broj s = z + w;
    std::cout << "Z + W: " << s << std::endl;

    Kompleksni_Broj t = z - w;
    std::cout << "Z - W: " << t << std::endl;

    Kompleksni_Broj u = z * w;
    std::cout << "Z * W: " << u << std::endl;

    bool p = z == w;
    std::cout << "Z == W: " << (p ? "Da" : "Ne") << std::endl;

    Kompleksni_Broj::get_broj_objekata();

    return EXIT_SUCCESS;
}