#ifndef _Cercle
#define _Cercle
#include "Forme.hpp"
class Cercle : public Forme{
    int ordre;
    public:
        void SetOrdre(int a);
        int GetOrdre();
    public:
        Cercle();
        Cercle(int vx, int vy, int vw, int vh);
        Cercle(int cx, int cy,int rayon);
    public:
        std::string toString();
        void setRayon(int r);
        int getRayon();
        int getLargeur();
        int getHauteur();
        ~Cercle();
};
#endif