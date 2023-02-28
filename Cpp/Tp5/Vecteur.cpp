#include "Vecteur.hpp"
#include <cstring>

Vecteur::Vecteur(const Vecteur& c1):capacite{c1.capacite},cursor{c1.cursor}
{   
    tab = new float[c1.capacite+1];
    memcpy(tab, c1.tab,c1.capacite+1);
    std::cout << "Constructeur de copie de Vecteur.\n";
}
Vecteur::Vecteur(int capa):capacite{capa},tab{new float[capa+1]},cursor{0}
{
    tab[0] ='\0';
}
Vecteur::~Vecteur()
{

    delete [] tab;  
}

int Vecteur::capacity() const
{
    return capacite;
}
int Vecteur::size() const
{
    return cursor;
}
void Vecteur::push_back(float a)
{
    if (cursor==capacite)
    {
        capacite*=2;
        float *tab1 = new float[capacite];
        memcpy(tab1,tab,capacite);
        tab1[cursor] = a;
        delete [] tab;
        tab = tab1;
    }
    else 
    {
        tab[cursor]=a;
    }
    cursor++;
}