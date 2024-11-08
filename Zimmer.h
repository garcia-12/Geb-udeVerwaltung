#ifndef ZIMMER_H
#define ZIMMER_H
#include <string>
#include <vector>
class Zimmer
{
public:
    Zimmer(int z);
    void addMoebel(std::string moebel);
    void moebelAnzeigen() const;
    int getZimmernummer() const;


private:
    int ZimmerNummer;
    std::vector <std::string> moebelListe;
};

#endif // ZIMMER_H
