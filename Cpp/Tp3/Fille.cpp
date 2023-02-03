#include <iostream>
#include "Fille.hpp"
#include "catch.hpp"
Fille::Fille(int b):n{b}
{
    std::cout<< "constructeur Fille " << n <<std::endl;
}
Fille::Fille():Fille(2)
{
}
Fille::~Fille()
{
    std::cout<< "destructeur Fille "<< n <<std::endl;
}