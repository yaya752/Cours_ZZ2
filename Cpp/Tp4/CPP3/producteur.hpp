#ifndef _PRODUCTEUR
#define _PRODUCTEUR

#include <iostream>

class Producteur {
    static int travail;
    public:
        void produire(int quantite, std::string nom);
        int getTravail();
};

#endif
