#ifndef _Liste
#define _Liste
#include "Cercle.cpp"
#include "Rectangle.cpp"
const int  taille = 10;
class Liste{
    public:
        Cercle  ListeC[taille];
        Rectangle ListeR[taille];
        int compteur;
        int nb_r;
        int nb_c;
    public:
        Liste();
    public:
        void Add(Rectangle r);
        void Add(Cercle c);
    public:
        std::string toString();

};
#endif