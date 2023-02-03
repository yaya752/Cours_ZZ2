#include <stdio.h>
#include <iostream>
#include "Point.hpp"
int main(int, char**) {
  Point p1 {0,0};
  Point p2 {};
  Point *p3 = new Point{1,1};
  Point *p4 = new Point{};
  p1.deplacerVers(7,-7);
  std::cout << p1.getY() << std::endl;
  p2.deplacerDe(7,-7);
  std::cout << p2.getX() << p2.getY()<< std::endl;
  std::cout << Point::getCompteur()<< std::endl;
  delete p3;
  delete p4;
  
  return 0;
}