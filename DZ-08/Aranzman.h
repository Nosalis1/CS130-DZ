#ifndef CS130_DZ_ARANZMAN_H
#define CS130_DZ_ARANZMAN_H

#include <iostream>
#include <string>

class Aranzman {
private:
    std::string ime_agencije;
    std::string ime_hotela;
    std::string mesto;
    int broj_nocenja;
    double cena;

public:
    std::string get_ime_agencije()const;
    std::string get_ime_hotela()const;
    std::string get_mesto()const;
    int get_broj_nocenja()const;
    double get_cena()const;

    void set_ime_agencije(const std::string&);
    void set_ime_hotela(const std::string&);
    void set_mesto(const std::string&);
    void set_broj_nocenja(int);
    void set_cena(double);
public:
    Aranzman();
    Aranzman(const std::string&, const std::string&, const std::string&, int, double);
    Aranzman(const Aranzman&);
    ~Aranzman();

    double prosek()const;
};

#endif //CS130_DZ_ARANZMAN_H
