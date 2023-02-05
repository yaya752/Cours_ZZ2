#include <stdio.h>
#include <iostream>
#include <sstream>
#include "Cercle.hpp"

Cercle::Cercle():Forme{}
{
}
Cercle::Cercle(int vx, int vy, int vw, int vh):Forme{Point{vx,vy},vw,vh}
{
}
Cercle::Cercle(int cx, int cy,int rayon):Forme{Point{rayon + cx,rayon + cy},rayon * 2,rayon * 2} {}
void Cercle::setRayon(int r)
{
  w=r*2;
  h=r*2;
} 
int Cercle::getRayon()
{
  return w/2;
}
std::string Cercle::toString()
{
  std::ostringstream oss;
  oss << "CERCLE:"<< Forme::toString();
  return oss.str();
}
int Cercle::getLargeur()
{
  return w;
}
int Cercle::getHauteur()
{
  return h;
}
Cercle::~Cercle()  {}