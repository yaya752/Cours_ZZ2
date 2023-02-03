#include "producteur.hpp"
#include <iostream>
#include <fstream>

int Producteur::travail = 0;
void Producteur::produire(int quantite, std::string nom) {
    Producteur::travail ++;
    std::fstream  fichier;
    std::string ligne;
    fichier.open(nom, std::ios::app);
    fichier << quantite << std::endl;
    
    for (int i =1; i<=10; i++)
    {
        fichier<<  i << std::endl;  
    }

    
}

int Producteur::getTravail()
{
    return Producteur::travail;
}