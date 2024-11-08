#include "Gebaeude.h"


Gebaeude::Gebaeude()
{

}

Gebaeude::~Gebaeude()
{
    for(unsigned int i =0; i < wohnungsListe.size(); i++)
        delete wohnungsListe[i];

    wohnungsListe.clear();

}

void Gebaeude::dialog()
{
    Wohnung* w = new Wohnung;
    wohnungsListe.push_back(w);

    int choice;
    do{
        do{
            std::cout << "1: Zimmer hinzufuegen"
                         "\n2: Moebel hinzufuegen"
                         "\n3: Zimmer anzeigen"
                         "\n0: Pogramm beenden"<<std::endl;

            std::cin >> choice;
        }while(choice != 0 and choice != 1 and choice != 2 and choice != 3);

        if(choice == 1){
            std::cout << "Geben Sie Zimmernummer ein: "<<std::endl;
            int zimmernummer;
            std::cin >> zimmernummer;
            Zimmer* zimmer = new Zimmer(zimmernummer);
            w->zimmerHinzufuegen(zimmer);

            std::cout << "Das Zimmer wurde Erfolgreich hinzugefuegt!"<<std::endl;

        }
        else if (choice == 2){
            std::cout << "Geben Sie ihre Zimmernummer ein: " << std::endl;
            int zimmernummer;
            std::cin>> zimmernummer;
            w->moebelHinzufuegen(zimmernummer);

        }
        else if (choice == 3){
            std::cout << "Zimmernumer ?";
            int zimmernummer;
            std::cin >> zimmernummer;
            w->zimmerAnzeigen(zimmernummer);
        }
        else if (choice == 0){

            break;
        }


    }while(choice != 0);
}
