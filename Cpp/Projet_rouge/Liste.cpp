#include <stdio.h>
#include <iostream>
#include <sstream>
#include "Liste.hpp"
void Liste::Add(Rectangle r)
{
    if (nb_r < 10)
    {
        nb_r++;
        compteur++;
        ListeR[nb_r]= r;
        r.SetOrdre(compteur);
    }
}
void Liste::Add(Cercle c)
{
    if (nb_c < 10)
    {
        nb_c++;
        compteur++;
        ListeC[nb_c] = c;
        c.SetOrdre(compteur);
    }
}
Liste::Liste():compteur{0},nb_c{0},nb_r{0}
{
}
std::string Liste::toString()
{
    std::ostringstream oss;
    int j = nb_c-1;
    int k = nb_r-1;
    for (int i = compteur;i>0;i--)
    {  
        if (ListeC[j].GetOrdre() == i)
        {
            oss << ListeC[j].toString();
            j--;
        }
        else
        {
            oss << ListeR[k].toString();
            k--;
        }
    }
    return oss.str();

}