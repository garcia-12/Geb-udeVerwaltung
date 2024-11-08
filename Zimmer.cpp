#include "Zimmer.h"
#include <iostream>
Zimmer::Zimmer(int z): ZimmerNummer(z)
{

}

void Zimmer::addMoebel(std::string moebel)
{
    moebelListe.push_back(moebel);
}

void Zimmer::moebelAnzeigen() const
{

    std::cout <<"ZimmerNummer: " << ZimmerNummer << std::endl;
    std::cout << "\nListe von Moebel: ";
    for(std::string m: moebelListe){
        std::cout << m <<std::endl;
    }
}

int Zimmer::getZimmernummer() const
{
    return ZimmerNummer;
}
