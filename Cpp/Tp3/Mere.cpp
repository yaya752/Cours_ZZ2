#include <iostream>
#include "Mere.hpp"
#include "catch.hpp"
Mere::Mere(int a):n{a}
{
    std::cout<< "constructeur " << n <<std::endl;
}
Mere::Mere():Mere(2)
{
}
Mere::~Mere()
{
    std::cout<< "destructeur "<< n <<std::endl;
}
