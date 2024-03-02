#include <iostream>

#define TASK_2
#define TASK_27

#ifdef TASK_2
#include "Aranzman.h"
#endif

#ifdef TASK_27

#endif

int main(void){
#ifdef TASK_2
    const int BROJ_ARANZMANA = 5;
    Aranzman* aranzmani = new Aranzman[BROJ_ARANZMANA];

    aranzmani[0] = Aranzman("Agencija 1", "Hotel 1", "Nis", 5, 100);
    aranzmani[1] = Aranzman("Agencija 2", "Hotel 2", "Beograd", 10, 200);
    aranzmani[2] = Aranzman("Agencija 3", "Hotel 3", "Novi Sad", 15, 300);
    aranzmani[3] = Aranzman("Agencija 4", "Hotel 4", "Beograd", 20, 400);
    aranzmani[4] = Aranzman("Agencija 5", "Hotel 5", "Kruseva", 25, 500);

    for (int i = 0; i < BROJ_ARANZMANA; i++) {
        std::cout << "----------------------------------------------------------\n";
        std::cout << "Agencija: " << aranzmani[i].get_ime_agencije() << std::endl;
        std::cout << "Hotel: " << aranzmani[i].get_ime_hotela() << std::endl;
        std::cout << "Mesto: " << aranzmani[i].get_mesto() << std::endl;
        std::cout << "Broj nocenja: " << aranzmani[i].get_broj_nocenja() << std::endl;
        std::cout << "Ukupna cena: " << aranzmani[i].get_cena() << std::endl;
        std::cout << "Prosek po nocenju:  " << aranzmani[i].prosek() << std::endl;
        std::cout << std::endl;
        std::cout << "----------------------------------------------------------\n";
    }

    delete[] aranzmani;
#endif
#ifdef TASK_27
    std::string str1, str2, str3, str4;
    std::cout << "Unesite prvi string: ";
    std::getline(std::cin, str1);
    std::cout << "Unesite drugi string: ";
    std::getline(std::cin, str2);
    std::cout << "Unesite treci string: ";
    std::getline(std::cin, str3);
    std::cout << "Unesite cetvrti string: ";
    std::getline(std::cin, str4);

    std::string str5 = str2;
    size_t index = str5.find(str1);
    if (index != std::string::npos) {
        str5.erase(index, str1.length());
    }

    std::string str6 = str4;
    index = str6.find(str3);
    if (index != std::string::npos) {
        str6.erase(index, str3.length());
    }

    if (str5 == str6) {
        std::cout << "Stringovi su jednaki" << std::endl;
    }
    else {
        std::cout << "Stringovi nisu jednaki" << std::endl;
    }
#endif
    return EXIT_SUCCESS;
}