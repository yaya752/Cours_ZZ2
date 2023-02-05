#include <stdio.h>
#include <iostream>
#include <sstream>
#include "Groupe.hpp"

Groupe::Groupe(){}
Groupe::~Groupe(){}
std::string Groupe::toString()
{
    std::ostringstream oss;
    oss << "GROUPE:"<< Forme::toString();
    return oss.str();
}
