#ifndef _STATISTICIEN
#define _STATISTICIEN

#include <iostream>

class Statisticien {
	static bool calcul;
    public:
        void acquerir(std::string nom);
        bool aCalcule();
};

#endif