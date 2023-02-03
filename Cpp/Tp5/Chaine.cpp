#include "Chaine.hpp"
#include <cstring>
Chaine::Chaine():capacite{-1},tab{nullptr}
{

}

char* Chaine::c_str() const
{
    return tab;
}
int Chaine::getCapacite() const
{
    return capacite;
}