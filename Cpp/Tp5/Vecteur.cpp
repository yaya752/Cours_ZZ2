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

        float *tab1 = new float[capacite*2];
        memcpy(tab1,tab,sizeof(float) * capacite);
        capacite= capacite *2;
        delete [] tab;
        tab = tab1;
        tab[cursor] = a;
    }
    else 
    {
        tab[cursor]=a;
    }
    cursor++;
}
float Vecteur::operator[](int a) const
{
    // if (a>=0 && a<cursor)
    // {
        return tab[a];
    // }
    // else if (a>=cursor)
    // {
    //     throw std::bad_alloc();
    // }
    // else 
    // {
    //     throw std::out_of_range("indice trop grand");
    // }
}
float Approx(float x)
{
    int i = (int) x;
    x = (float) i;
    return x;
}