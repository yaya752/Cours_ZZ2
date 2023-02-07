#include <stdio.h>
#include <iostream>
#include <sstream>
#include "Groupe.hpp"

Groupe::Groupe(){
    listeF = new Forme*[taille];
    compteur = 0;
}
int Groupe::getCompteur()
{
    return compteur;
}
Groupe::~Groupe(){
    delete [] listeF;
}
void Groupe::ajoutForme(Forme* f)
{
    listeF[compteur]=f;
    if (compteur == 0)
    {
        p.setX(f->getPoint().getX());
        p.setY(f->getPoint().getY());
        h=f->getH();
        w=f->getW();
    }
    
    
    else{
         if (p.getX()>(f->getPoint().getX()))
        {
        
            if (p.getX()+w<f->getPoint().getX()+f->getW() )
            {
                w = f->getW();
            }
            else
            {
                w =p.getX()-f->getPoint().getX()+w;
            }
            p.setX(f->getPoint().getX());
            
        }
        else
        {
            if (p.getX()+w>f->getPoint().getX()+f->getW() )
            {
            }
            else
            {
                w =f->getPoint().getX()-p.getX()+f->getW();
            }
        }
        if (p.getY()>(f->getPoint().getY()))
        {
            if (p.getY()+h<f->getPoint().getY()+f->getH() )
            {
                h = f->getH();
            }
            else
            {
                h =p.getY()-f->getPoint().getY()+h;
            }
            p.setY(f->getPoint().getY());
        }
        else
        {
            if (p.getY()+h>f->getPoint().getY()+f->getH() )
            {
            }
            else
            {
                h =f->getPoint().getY()-p.getY()+f->getH();
            }
        }
    }
    compteur++;
}

std::string Groupe::toString()
{
    int parcours = 0;
    std::ostringstream oss;
    oss << "GROUPE:"<< Forme::toString()<<std::endl;

    while(parcours<compteur) {
        oss<<listeF[parcours]->toString()<<std::endl;
        parcours++;
    }
    return oss.str();
}