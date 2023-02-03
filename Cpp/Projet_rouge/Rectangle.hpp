#ifndef _Rectangle
#define _Rectangle
#include "Forme.hpp"
class Rectangle : public Forme{
    int ordre;

    public:
        void SetOrdre(int a);
        int GetOrdre();
    public:
        Rectangle();
        Rectangle(int vx, int vy, int vw, int vh);
    public:
        std::string toString();
        ~Rectangle();
};
#endif
