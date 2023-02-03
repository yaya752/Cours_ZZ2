#ifndef _Famille
#define _Famille
#include "Bavarde.hpp"
#include "Couple.hpp"
class Famille{
    Bavarde *tab;
    int taille;
    public:
        Famille();
        Famille(int t);
        ~Famille();
};
#endif