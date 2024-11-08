#ifndef WOHNUNG_H
#define WOHNUNG_H

#include "Zimmer.h"
#include <string>
#include <vector>
class Wohnung
{
public:
    Wohnung();
    ~Wohnung();
    void zimmerHinzufuegen(Zimmer* pZ);
    void zimmerAnzeigen(int nummer) const;
    void moebelHinzufuegen(int nummer);

private:
    std::string wohnungsName;
    std::vector <Zimmer*> zimmerliste;

};

#endif // WOHNUNG_H
