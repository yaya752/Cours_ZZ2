#include "Chaine.hpp"
#include <cstring>
Chaine::Chaine():capacite{-1},tab{nullptr}
{

}
Chaine::Chaine(const char* inCS):capacite{(signed) strlen(inCS) }
{
    tab = (char*)inCS;
    
}
Chaine::~Chaine(){

}
char* Chaine::c_str() const
{
    return tab;
}
int Chaine::getCapacite() const
{
    return capacite;
}