#include <stdio.h>
#include <iostream>
#include "Cercle.hpp"
#include "Rectangle.hpp"
int main(int, char**) 
{
  Cercle C = Cercle(0,0,4,4);
  C.toString();
  Rectangle R = Rectangle(1,1,2,2);
  std::cout<< R.toString()<< std::endl;
  std::cout<< C.toString()<< std::endl;
}