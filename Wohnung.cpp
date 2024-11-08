#include "Wohnung.h"

#include <iostream>

Wohnung::Wohnung()
{
    std::cout << "Geben Sie den Anme ihrer Wohnung: " <<std::endl;
    std::cin >> wohnungsName;
    std::cout << "Ihre Wohnung wurde Erfolgreich hinzugefuegt...!" <<std::endl;
}

Wohnung::~Wohnung()
{
    for(unsigned int i = 0; i < zimmerliste.size(); i++){
        delete zimmerliste[i];//dynamisches Objekt vernichten
    }
    zimmerliste.clear();//aus vector nehmen
    std::cout << "Alle Zimmer geloescht" <<std::endl;

}

void Wohnung::zimmerHinzufuegen(Zimmer *pZ)
{
    zimmerliste.push_back(pZ);
}

void Wohnung::zimmerAnzeigen(int nummer) const
{
    for(Zimmer* z : zimmerliste){
        if (nummer = z->getZimmernummer()){
            z->moebelAnzeigen();
        }
    }
}

void Wohnung::moebelHinzufuegen(int nummer)
{
    for(Zimmer* z : zimmerliste){
        if (nummer = z->getZimmernummer()){
            std::cout << "Zimmer gefunden!"
                         "\nName des Moebelstuecks?";
            std::string moebelName;
            std::cin>>moebelName;
            z->addMoebel(moebelName);
        }
        else
            std::cout <<"Zimmer nicht gefunden."<<std::endl;



    }
}
