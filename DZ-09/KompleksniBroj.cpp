#include "KompleksniBroj.h"

int Kompleksni_Broj::broj_objekata = 0;

Kompleksni_Broj::Kompleksni_Broj() {
    realni_deo = imaginarni_deo = 0;
    broj_objekata++;
}

Kompleksni_Broj::Kompleksni_Broj(double r, double i) : realni_deo(r), imaginarni_deo(i) {
    broj_objekata++;
}

Kompleksni_Broj::~Kompleksni_Broj() {
    broj_objekata--;
}

double Kompleksni_Broj::moduo() const {
    return sqrt(realni_deo * realni_deo + imaginarni_deo * imaginarni_deo);
}

Kompleksni_Broj Kompleksni_Broj::konjugovano() const {
    return Kompleksni_Broj(realni_deo, -1 * imaginarni_deo);
}

double Kompleksni_Broj::get_realni_deo() const {
    return realni_deo;
}

double Kompleksni_Broj::get_imaginarni_deo() const {
    return imaginarni_deo;
}

int Kompleksni_Broj::get_broj_objekata() {
    std::cout << "Broj objekata: " << broj_objekata << std::endl;
    return broj_objekata;
}

void Kompleksni_Broj::set_realni_deo(double r) {
    realni_deo = r;
}

void Kompleksni_Broj::set_imaginarni_deo(double i) {
    imaginarni_deo = i;
}

void set_realni_deo(Kompleksni_Broj& k, double r) {
    k.realni_deo = r;
}

void set_imaginarni_deo(Kompleksni_Broj& k, double i) {
    k.imaginarni_deo = i;
}

Kompleksni_Broj Kompleksni_Broj::operator+(const Kompleksni_Broj& k) {
    return Kompleksni_Broj(realni_deo + k.realni_deo, imaginarni_deo + k.imaginarni_deo);
}

Kompleksni_Broj Kompleksni_Broj::operator*(const Kompleksni_Broj& k) {
    return Kompleksni_Broj(realni_deo * k.realni_deo - imaginarni_deo * k.imaginarni_deo, realni_deo * k.imaginarni_deo + imaginarni_deo * k.realni_deo);
}

Kompleksni_Broj Kompleksni_Broj::operator-(const Kompleksni_Broj& k) {
    return Kompleksni_Broj(realni_deo - k.realni_deo, imaginarni_deo - k.imaginarni_deo);
}

bool Kompleksni_Broj::operator==(const Kompleksni_Broj& k) const {
    return realni_deo == k.realni_deo && imaginarni_deo == k.imaginarni_deo;
}

std::ostream& operator<<(std::ostream& os, const Kompleksni_Broj& k) {
    os << k.realni_deo << " + " << k.imaginarni_deo << "i";
    return os;
}

std::istream& operator>>(std::istream& is, Kompleksni_Broj& k) {
    std::cout << "Unesite realni deo: ";
    is >> k.realni_deo;
    std::cout << "Unesite imaginarni deo: ";
    is >> k.imaginarni_deo;
    return is;
}
