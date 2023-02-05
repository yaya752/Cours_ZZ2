#include <stdio.h>
#include <iostream>
#include <sstream>
#include "Forme.hpp"
int Forme::compteur =0;
int Forme::getH() {
  return h;
}
int Forme::getW() {
  return w;
}
void Forme::setH(int valeurH) {
  h = valeurH;
}
void Forme::setW(int valeurW) {
  w = valeurW;
}
void Forme::setId() {
  Id = compteur++ ;
}
int Forme::getCompteur(){
  return compteur;
}


Forme::Forme(Point p1,int h1, int w1):w{w1},h{h1},p{p1},Id{compteur}
{   
    
    compteur++;
    
}
Forme::Forme():w{0},h{0},p{Point{0,0}},Id{compteur}
{ 
    compteur++;
    
}
Forme::Forme(Point p1, COULEURS couleur1):w{0},h{0},p{p1},couleur{couleur1},Id{compteur}
{
  compteur++;
}

COULEURS Forme::getCouleur()
{
  return couleur;
}
Point& Forme::getPoint()
{
 return p;
}
int Forme::getX()
{
  return getPoint().getX();
}
int Forme::getY()
{
  return getPoint().getY();
}
void Forme::setX(int ValeurX)
{
  p.setX(ValeurX);
}
void Forme::setY(int ValeurY)
{
  p.setY(ValeurY);
}
void Forme::setCouleur(COULEURS couleur1)
{
  couleur=couleur1;
}
int Forme::prochainId()
{
  return compteur ;
}
int Forme::getId()
{
  return Id;
}
std::string Forme::toString()
{
  std::ostringstream oss;
  oss << Id <<" " << p.getX()<< " " << p.getY()<<" " << h <<" " << w;
  return oss.str();
}
Forme::~Forme()
{
}