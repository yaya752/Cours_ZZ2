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
    tab = new char[c1.capacite+1];
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
    delete [] tab ;
    tab = new char[x.capacite+1];
    strcpy(tab, x.tab);
    capacite = x.capacite;
    return *this;
}
std::ostream& operator<<( std::ostream & fr,const Chaine x){
    return fr << x.tab;
}
/*
Chaine& Chaine::operator[](const int indice)
{
    char
    std::cin  >> prenom;
    return *this;
}
*/
char Chaine::operator[](int a) const
{
    if (a>0 && a<capacite)
    {
        return tab[a];
    }
    else if (a>capacite)
    {
        throw std::bad_alloc();
    }
    else 
    {
        throw std::out_of_range("indice trop grand");
    }
    
}