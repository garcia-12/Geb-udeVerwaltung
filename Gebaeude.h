#ifndef GEBAEUDE_H
#define GEBAEUDE_H

#include "Wohnung.h"
#include "Zimmer.h"
#include <string>
#include <iostream>

#include <vector>
class Gebaeude
{
public:
    Gebaeude();
    ~Gebaeude();

    void dialog();

private:
    std::vector <Wohnung*> wohnungsListe;
};

#endif // GEBAEUDE_H
