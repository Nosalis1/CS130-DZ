#include "Aranzman.h"

Aranzman::~Aranzman() {
    std::cout << "Objekat je uništen" << std::endl;
}

Aranzman::Aranzman(): Aranzman("", "", "", 0, 0) {}

Aranzman::Aranzman(const std::string& ime_agencije, const std::string& ime_hotela, const std::string& mesto, int broj_nocenja, double cena_aranzmana) {
    this->ime_agencije = ime_agencije;
    this->ime_hotela = ime_hotela;
    this->mesto = mesto;
    this->broj_nocenja = broj_nocenja;
    this->cena = cena_aranzmana;
}

//Aranzman::Aranzman(const std::string& ime_agencije, const std::string& ime_hotela, const std::string& mesto, int broj_nocenja, double cena)
//	: ime_agencije(ime_agencije), ime_hotela(ime_hotela), mesto(mesto), broj_nocenja(broj_nocenja), cena(cena) {
//}

Aranzman::Aranzman(const Aranzman& other) {
    ime_agencije = other.ime_agencije;
    ime_hotela = other.ime_hotela;
    mesto = other.mesto;
    broj_nocenja = other.broj_nocenja;
    cena = other.cena;
}

std::string Aranzman::get_ime_agencije() const {
    return ime_agencije;
}

std::string Aranzman::get_ime_hotela() const {
    return ime_hotela;
}

std::string Aranzman::get_mesto() const {
    return mesto;
}

int Aranzman::get_broj_nocenja() const {
    return broj_nocenja;
}

double Aranzman::get_cena() const {
    return cena;
}

void Aranzman::set_ime_agencije(const std::string& ime_agencije)
{
    this->ime_agencije = ime_agencije;
}

void Aranzman::set_ime_hotela(const std::string& ime_hotela)
{
    this->ime_hotela = ime_hotela;
}

void Aranzman::set_mesto(const std::string& mesto)
{
    this->mesto = mesto;
}

void Aranzman::set_broj_nocenja(int broj_nocenja)
{
    this->broj_nocenja = broj_nocenja;
}

void Aranzman::set_cena(double cena)
{
    this->cena = cena;
}

double Aranzman::prosek() const
{
    return cena / broj_nocenja;
}