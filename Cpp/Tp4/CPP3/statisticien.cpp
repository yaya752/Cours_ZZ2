#include "statisticien.hpp"
#include <fstream>
bool Statisticien::calcul=false;

void Statisticien::acquerir(std::string nom) {
    
	Statisticien::calcul = true;
}
bool Statisticien::aCalcule()
 {
    return Statisticien::calcul;
 }
