#include <stdio.h>
#include <iostream>
#include "Point.hpp"
int Point::compteur = 0;
int Point::getX() {
  return x;
}
void Point::setX(int valeurX) {
  x = valeurX;
}

int Point::getY() {
  return y;
}
void Point::setY(int valeurY) {
  y = valeurY;
}
int Point::getCompteur(){
  return compteur;
}
void Point::deplacerVers(int newX, int newY) {
  setY(newY);
  setX(newX);
}
void Point::deplacerDe(int deltaX, int deltaY) {
  setX(getX()+deltaX);
  setY(getY()+deltaY);
}
Point::Point() : Point{0,0}
{
  std::cout << "Méthode sans arguments"<< std::endl;
}
Point::Point(int vx, int vy):x{vx}, y{vy}
{
  std::cout << "Méthode avec arguments"<< std::endl;
  ++compteur;
}
