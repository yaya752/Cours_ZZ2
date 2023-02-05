#include <stdio.h>
#include <iostream>
#include <sstream>
#include "Rectangle.hpp"
#include "Forme.hpp"
Rectangle::Rectangle(int vx, int vy, int vw, int vh):Forme{Point{vx,vy},vw,vh}
{
}
Rectangle::Rectangle():Forme{} {}
std::string Rectangle::toString()
{
  std::ostringstream oss;
  oss << "RECTANGLE:" << Forme::toString();
  return oss.str();
}
Rectangle::~Rectangle()
{
}