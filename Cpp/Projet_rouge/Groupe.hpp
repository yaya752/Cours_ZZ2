#ifndef _GROUPE
#define _GROUPE
#include "Forme.hpp"
const int taille = 10;
class Groupe :public Forme{
    Forme ** listeF;
    int compteur;
    public:
        int getCompteur();
        std::string toString();
        Groupe();
        ~Groupe();
        void ajoutForme(Forme * formes);
};
#endif