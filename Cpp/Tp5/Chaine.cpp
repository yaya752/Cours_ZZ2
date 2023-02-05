#include "Chaine.hpp"
#include <cstring>
Chaine::Chaine():capacite{-1},tab{nullptr}
{

}
Chaine::Chaine(const char* inCS):capacite{(signed) strlen(inCS) }
{   
    tab = new char[capacite+1];
    strcpy(tab, inCS);
    
}
Chaine::Chaine(const Chaine& c1):capacite{c1.capacite}
{
    tab = new char[capacite+1];
    strcpy(tab, c1.tab);
    std::cout << "Constructeur de copie de Chaine.\n";
}
Chaine::Chaine(int capa):capacite{capa},tab{new char[capa+1]}
{
    tab[0] ='\0';
}
Chaine::~Chaine()
{
    delete [] tab;
}
char* Chaine::c_str() const
{
    return tab;
}
int Chaine::getCapacite() const
{
    return capacite;
}
void Chaine::afficher() const 
{

}
void Chaine::afficher(std::ostream &fr) const
{
    fr << tab;

}
Chaine& Chaine::operator=(const Chaine& x)
{
    tab = new char[x.capacite+1];
    strcpy(tab, x.tab);
    capacite = x.capacite;
    return *this;
}