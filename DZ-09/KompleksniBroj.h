#ifndef CS130_DZ_KOMPLEKSNIBROJ_H
#define CS130_DZ_KOMPLEKSNIBROJ_H

#include <iostream>
#include <math.h>

class Kompleksni_Broj {
public:
    Kompleksni_Broj();
    Kompleksni_Broj(double, double);
    ~Kompleksni_Broj();
private:
    double realni_deo;
    double imaginarni_deo;
    static int broj_objekata;

public:
    double moduo()const;
    Kompleksni_Broj konjugovano()const;

    double get_realni_deo()const;
    double get_imaginarni_deo()const;

    static int get_broj_objekata();

    void set_realni_deo(double);
    void set_imaginarni_deo(double);

    friend void set_realni_deo(Kompleksni_Broj&, double);
    friend void set_imaginarni_deo(Kompleksni_Broj&, double);

    Kompleksni_Broj operator+(const Kompleksni_Broj&);
    Kompleksni_Broj operator*(const Kompleksni_Broj&);
    Kompleksni_Broj operator-(const Kompleksni_Broj&);
    bool operator==(const Kompleksni_Broj&)const;

    friend std::ostream& operator<<(std::ostream&, const Kompleksni_Broj&);
    friend std::istream& operator>>(std::istream&, Kompleksni_Broj&);
};

#endif //CS130_DZ_KOMPLEKSNIBROJ_H
